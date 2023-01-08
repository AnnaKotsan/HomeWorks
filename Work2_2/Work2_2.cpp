// Work2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>
struct BankAccount
{
	int Number = 1; // Номер счёта
	std::string Name; // Имя владельца
	double Balance; // Баланс
};

void ChangeBalance(BankAccount& account, double balance)
{
	account.Balance = balance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	BankAccount account;

	std::cout << "Введите номер счёта: " << std::endl;
	std::cin >> account.Number;
	std::cout << std::endl;

	std::cout << "Введите имя владельца: " << std::endl;
	std::cin >> account.Name;
	std::cout << std::endl;

	std::cout << "Введите баланс: " << std::endl;
	std::cin >> account.Balance;
	std::cout << std::endl;

	double newbalance;
	std::cout << "Введите новый баланс: " << std::endl;
	std::cin >> newbalance;
	ChangeBalance(account, newbalance);
	std::cout << std::endl;

    std::cout << "Ваш счёт: " << account.Name << ", " << account.Number << ", " << account.Balance << std::endl;
}
