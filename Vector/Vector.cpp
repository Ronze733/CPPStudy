#include <iostream>
#include <vector>

using namespace std;

void printAll(vector<int> vec);

int main()
{
	vector<int> vec = { 1, 2, 3, 4, 5 };

	printAll(vec);				// 1 2 3 4 5

	vec.insert(vec.begin(), 0);
	printAll(vec);				// 0 1 2 3 4 5

	vec.push_back(1);
	printAll(vec);				// 0 1 2 3 4 5 1

	vec.push_back(2);

	vec.insert(find(vec.begin(), vec.end(), 1), 4);

	printAll(vec);				// 0 4 1 2 3 4 5 1 2

	vec.pop_back();
	printAll(vec);				// 0 4 1 2 3 4 5 1

	vec.erase(vec.begin());
	printAll(vec);				// 4 1 2 3 4 5 1
	
	vec.erase(vec.begin() + 1, vec.begin() + 4);
	printAll(vec);				// 4 4 5 1

	return 0;
}

/*
	clear() : 모든 원소 제거하여 완전히 비어있는 벡터로
	reserve(capacity) : vector가 사용할 용량을 지정. 매개변수로 지정한 값이 현재 용량보다
						크다면 메모리 매개변수를 크기만큼 재할당. 작거나 같다면 작동하지 않음
	shrink_to_fit() : 여분의 메모리 공간을 해제하는 용도(벡터 크기가 더 이상 변하지 않을 때 사용)
*/

void printAll(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";
	cout << endl;
}