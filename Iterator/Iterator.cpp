#include <iostream>
#include <forward_list>
#include <vector>
#include <algorithm>

/*
int main()
{
	// ���ʿ� ���� ���� �ֱ� �����
	vector<string> vec = {
		"Lewis Hamilton", "Lewis Hamilton", "Nico Roseberg", "Sebastian Vettel", "LewisHamilton",
		"Sebastian Vettel", "Sebastian Vettel", "Sebastian Vettel", "Fernando Alonso"
	};

	auto it = vec.begin();
	cout << "���� �ֱ� ����� : " << *it << endl;		// Lewis Hamilton

	it += 8;
	cout << "8�� �� ����� : " << *it << endl;			// Fernando Alonso

	// it -= 3;
	advance(it, -3);
	cout << "�� �� 3�� �� ����� : " << *it << endl;	// Sebastian Vettel

	forward_list<string> fwd(vec.begin(), vec.end());

	auto it1 = fwd.begin();
	cout << "���� �ֱ� ����� : " << *it1 << endl;		// Lewis Hamilton

	advance(it1, 5);
	cout << "5�� �� ����� : " << *it1 << endl;			// Sebastian Vettel

	// std::forward_list�� ���������θ� �̵��� �� �����Ƿ�
	// �Ʒ��ڵ�� ������ �߻��Ѵ�
	// advance(it1, -2);

	return 0;
}
*/
