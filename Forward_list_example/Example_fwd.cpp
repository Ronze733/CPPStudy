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
	���ٽ��� ������� ���� ���
bool isYoungerThan19(const citizen& c)
{
	// ���̰� 19������ ������ true�� ��ȯ�Ͽ� ����Ʈ���� ����
	return (c.age < 19);
}

bool isTurning18NextYear(const citizen& c)
{
	// ���̰� 18���̸� true�� ��ȯ�Ͽ� ���⿡ ��ǥ���� ����� �ù����� ����
	return (c.age == 18);
}

int main()
{
	std::forward_list<citizen> citizens = {
		{"Kim", 22}, {"Lee", 25}, {"Park", 18}, {"Jin", 16}
	};

	auto citizens_copy = citizens;     // ���� ����(���߿� �� �� �˾ƺ���)

	std::cout << "��ü �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens.remove_if(isYoungerThan19);

	std::cout << "��ǥ���� �ִ� �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens_copy.remove_if(isTurning18NextYear);

	std::cout << "���⿡ ��ǥ���� ����� �ùε� : ";
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

	auto citizens_copy = citizens;		// ���� ����(���߿� ���� �˾ƺ���)

	std::cout << "��ü �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens.remove_if([](const citizen& c) {
		// ���̰� 19������ ������ ����Ʈ���� ����
		return (c.age < 19);
	});

	std::cout << "��ǥ���� �ִ� �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";
	std::cout << std::endl;

	citizens_copy.remove_if([](const citizen& c) {
		return (c.age != 18);
	});

	std::cout << "���⿡ ��ǥ���� ����� �ùε� : ";
	for (const auto& c : citizens_copy)
		std::cout << c << " ";
	std::cout << std::endl;
}