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
	std::cout << "Город: " << ad.city << std::endl;
	std::cout << "Улица: " << ad.street << std::endl;
	std::cout << "Номер дома: " << ad.house_number << std::endl;
	std::cout << "Номер квартиры: " << ad.apartment_number << std::endl;
	std::cout << "Индекс: " << ad.index << std::endl << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");

	address ad_1 = { "Москва", "Арбат", 25, 100, 123457 };
	address ad_2 = { "Ижевск", "Пушкина", 44, 123, 789654 };
	addressOutput(ad_1);
	addressOutput(ad_2);
}

/*
Задача 3. Вывод структуры
Описание
Создайте структуру для хранения адреса.Структура должна содержать название страны, города, улицы, номер дома, номер квартиры и индекс.

Создайте функцию для вывода структуры на консоль.

Протестируйте созданную функцию.Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.

Пример работы программы
Город : Москва
Улица : Арбат
Номер дома : 12
Номер квартиры : 8
Индекс : 123456

Город : Ижевск
Улица : Пушкина
Номер дома : 59
Номер квартиры : 143
Индекс : 953769
*/