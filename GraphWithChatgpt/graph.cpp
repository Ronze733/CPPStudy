#include <iostream>
#include <vector>
#include <algorithm>

struct Edge {
	int from, to, cost;
};

bool compareEdges(const Edge& a, const Edge& b) {
	return a.cost < b.cost;
}

int findParent(int node, std::vector<int>& parent) {
	if (parent[node] == node)
		return node;
	return parent[node] = findParent(parent[node], parent);
}

void unionNodes(int a, int b, std::vector<int>& parent) {
	a = findParent(a, parent);
	b = findParent(b, parent);
	if (a != b)
		parent[b] = a;
}

int minCostToConnect(int n, std::vector<Edge>& edges) {
	std::sort(edges.begin(), edges.end(), compareEdges);

	std::vector<int> parent(n + 1);
	for (int i = 1; i <= n; ++i)
		parent[i] = i;
	
	int totalCost = 0;
	for (const Edge& edge : edges) {
		if (findParent(edge.from, parent) != findParent(edge.to, parent)) {
			unionNodes(edge.from, edge.to, parent);
			totalCost += edge.cost;
		}
	}

	return totalCost;
}

int main() {
	int n = 4;
	std::vector<Edge> edges = {
		{1, 2, 5},
		{1, 3, 10},
		{2, 3, 20}
	};

	int result = minCostToConnect(n, edges);
	std::cout << "Minimum cost to connect all nodes: " << result << std::endl;

	return 0;
}