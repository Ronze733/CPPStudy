#include <iostream>
#include <forward_list>
#include <vector>
#include <algorithm>

/*
int main()
{
	// 앞쪽에 있을 수록 최근 우승자
	vector<string> vec = {
		"Lewis Hamilton", "Lewis Hamilton", "Nico Roseberg", "Sebastian Vettel", "LewisHamilton",
		"Sebastian Vettel", "Sebastian Vettel", "Sebastian Vettel", "Fernando Alonso"
	};

	auto it = vec.begin();
	cout << "가장 최근 우승자 : " << *it << endl;		// Lewis Hamilton

	it += 8;
	cout << "8년 전 우승자 : " << *it << endl;			// Fernando Alonso

	// it -= 3;
	advance(it, -3);
	cout << "그 후 3년 뒤 우승자 : " << *it << endl;	// Sebastian Vettel

	forward_list<string> fwd(vec.begin(), vec.end());

	auto it1 = fwd.begin();
	cout << "가장 최근 우승자 : " << *it1 << endl;		// Lewis Hamilton

	advance(it1, 5);
	cout << "5년 전 우승자 : " << *it1 << endl;			// Sebastian Vettel

	// std::forward_list는 순방향으로만 이동할 수 있으므로
	// 아래코드는 에러가 발생한다
	// advance(it1, -2);

	return 0;
}
*/
