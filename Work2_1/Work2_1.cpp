
#include <iostream>

 enum Month
{
	 Jan=1,
	 Feb,
	 Mar,
	 Apr,
	 May,
	 Jun,
	 Jul,
	 Aug,
	 Sep,
	 Oct,
	 Nov,
	 Dec
};

int main()
{
	setlocale (LC_ALL, "Russian");
	int val;
	Month number;
	while (val != 0)
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> val;
		number = static_cast<Month>(val);
		std::cout << std::endl;
		switch (number)
		{
		case Jan:
			std::cout << "Январь";
			break;
		case Feb:
			std::cout << "Февраль";
			break;
		case Mar:
			std::cout << "Март";
			break;
		case Apr:
			std::cout << "Апрель";
			break;
		case May:
			std::cout << "Май";
			break;
		case Jun:
			std::cout << "Июнь";
			break;
		case Jul:
			std::cout << "Июль";
			break;
		case Aug:
			std::cout << "Август";
			break;
		case Sep:
			std::cout << "Сентябрь";
			break;
		case Oct:
			std::cout << "Октябрь";
			break;
		case Nov:
			std::cout << "Ноябрь";
			break;
		case Dec:
			std::cout << "Декабрь";
			break;
		default:
			std::cout << "Неправильный номер!";
			break;
		}
	}
	std::cout << "До свидания!";
}
