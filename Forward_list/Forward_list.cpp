#include <iostream>
#include <forward_list>

using namespace std;

void printAll(forward_list<int> fwd);

int main()
{
	forward_list<int> fwd_list = { 1, 2, 3 };

	// fwd_list.push_front(0);
	fwd_list.emplace_front(0);

	printAll(fwd_list);				// 0 1 2 3

	auto it = fwd_list.begin();

	// fwd_list.insert_after(it, 5);
	fwd_list.emplace_after(it, 5);
	printAll(fwd_list);				// 0 5 1 2 3

	// fwd_list.insert_after(it, 6);
	fwd_list.emplace_after(it, 6);
	printAll(fwd_list);				// 0 6 5 1 2 3

	fwd_list.pop_front();
	printAll(fwd_list);				// 6 5 1 2 3

	auto it2 = fwd_list.begin();
	fwd_list.erase_after(it2);
	printAll(fwd_list);				// 6 1 2 3

	fwd_list.erase_after(it2, fwd_list.end());
	printAll(fwd_list);				// 6

	return 0;
}

void printAll(forward_list<int> fwd)
{
	for (auto it = fwd.begin(); it != fwd.end(); ++it)
		cout << *it << " ";

	cout << endl;
}

/*
	remove() : ������ ���� �� �ϳ��� �Ű������� �ް� ��ȣ �����ڸ� ����Ͽ� ���޵� ����
				��ġ�ϴ� ��� ���Ҹ� ã�� ����
				(������ Ÿ���� ��ȣ �����ڸ� �������� ������ ������ ������ ����Ŵ)
	remove_if() : 
*/