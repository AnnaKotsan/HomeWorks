// Work2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>

struct Address
{
	std::string Country = ""; // название страны
	std::string City = ""; // название города
	std::string House = ""; // номер дома
	std::string Apartment = ""; // номер квартиры
	std::string Index = ""; // индекс
};

void SetAddress(Address& address)
{
	std::cout << "Введите страну\n";
	std::cin >> address.Country;

	std::cout << "Введите город\n";
	std::cin >> address.City;

	std::cout << "Введите номер дома\n";
	std::cin >> address.House;

	std::cout << "Введите номер квартиры\n";
	std::cin >> address.Apartment;

	std::cout << "Введите индекс\n";
	std::cin >> address.Index;
}

void ShowAddress(Address& address)
{
	std::cout << "Страна: " << address.Country << "\n";

	std::cout << "Город: " << address.City << "\n";

	std::cout << "Номер дома: " << address.House << "\n";

	std::cout << "Номер квартиры: " << address.Apartment << "\n";

	std::cout << "Индекс: " << address.Index << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Address adress;
	SetAddress(adress);
	ShowAddress(adress);

}

//Создайте структуру для хранения адреса.Структура должна содержать название страны, города, улицы, номер дома, номер квартиры и индекс.

//Создайте функцию для вывода структуры на консоль.

//Протестируйте созданную функцию.Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.
