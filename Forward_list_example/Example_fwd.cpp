#include <iostream>
#include <string>
#include <forward_list>

struct citizen
{
	std::string name;
	int age;
};

std::ostream& operator<<(std::ostream& os, const citizen& c)
{
	return (os << "[" << c.name << ", " << c.age << "]");
}

/*
	람다식을 사용하지 않을 경우
bool isYoungerThan19(const citizen& c)
{
	// 나이가 19세보다 작으면 true를 반환하여 리스트에서 제거
	return (c.age < 19);
}

bool isTurning18NextYear(const citizen& c)
{
	// 나이가 18세이면 true를 반환하여 내년에 투표권이 생기는 시민으로 선택
	return (c.age == 18);
}

int main()
{
	std::forward_list<citizen> citizens = {
		{"Kim", 22}, {"Lee", 25}, {"Park", 18}, {"Jin", 16}
	};

	auto citizens_copy = citizens;     // 깊은 복사(나중에 좀 더 알아보자)

	std::cout << "전체 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens.remove_if(isYoungerThan19);

	std::cout << "투표권이 있는 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens_copy.remove_if(isTurning18NextYear);

	std::cout << "내년에 투표권이 생기는 시민들 : ";
	for (const auto& c : citizens_copy)
		std::cout << c << " ";
	std::cout << std::endl;
}
*/

int main()
{
	std::forward_list<citizen> citizens = {
		{"Kim", 22}, {"Lee", 25}, {"Park", 18}, {"Jin", 16}
	};

	auto citizens_copy = citizens;		// 깊은 복사(나중에 좀더 알아보자)

	std::cout << "전체 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens.remove_if([](const citizen& c) {
		// 나이가 19세보다 작으면 리스트에서 제거
		return (c.age < 19);
	});

	std::cout << "투표권이 있는 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens_copy.remove_if([](const citizen& c) {
		return (c.age != 18);
	});

	std::cout << "내년에 투표권이 생기는 시민들 : ";
	for (const auto& c : citizens_copy)
		std::cout << c << " ";
	std::cout << std::endl;
}