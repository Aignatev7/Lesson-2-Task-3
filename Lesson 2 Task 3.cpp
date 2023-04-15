#include <iostream>
#include <string>

struct address
{
	std::string city;
	std::string street;
	int house_number;
	int apartment_number;
	int index;
};

void addressOutput(address ad)
{
	std::cout << "�����: " << ad.city << std::endl;
	std::cout << "�����: " << ad.street << std::endl;
	std::cout << "����� ����: " << ad.house_number << std::endl;
	std::cout << "����� ��������: " << ad.apartment_number << std::endl;
	std::cout << "������: " << ad.index << std::endl << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	address ad_1 = { "������", "�����", 25, 100, 123457 };
	address ad_2 = { "������", "�������", 44, 123, 789654 };
	addressOutput(ad_1);
	addressOutput(ad_2);
}

/*
������ 3. ����� ���������
��������
�������� ��������� ��� �������� ������.��������� ������ ��������� �������� ������, ������, �����, ����� ����, ����� �������� � ������.

�������� ������� ��� ������ ��������� �� �������.

������������� ��������� �������.�������� � ���� ���������� ���������, ��������� �� � ������� � �������� �� ������� ������������ ���������� ���������.

������ ������ ���������
����� : ������
����� : �����
����� ���� : 12
����� �������� : 8
������ : 123456

����� : ������
����� : �������
����� ���� : 59
����� �������� : 143
������ : 953769
*/