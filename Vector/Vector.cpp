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
	clear() : ��� ���� �����Ͽ� ������ ����ִ� ���ͷ�
	reserve(capacity) : vector�� ����� �뷮�� ����. �Ű������� ������ ���� ���� �뷮����
						ũ�ٸ� �޸� �Ű������� ũ�⸸ŭ ���Ҵ�. �۰ų� ���ٸ� �۵����� ����
	shrink_to_fit() : ������ �޸� ������ �����ϴ� �뵵(���� ũ�Ⱑ �� �̻� ������ ���� �� ���)
*/

void printAll(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		cout << vec.at(i) << " ";
	cout << endl;
}