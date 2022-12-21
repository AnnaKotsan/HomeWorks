
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
	int val = 1;
	Month number;
	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> val;
		number = static_cast<Month>(val);
		std::cout << std::endl;
		switch (number)
		{
		case Jan:
			std::cout << "Январь" << std::endl;
			break;
		case Feb:
			std::cout << "Февраль" << std::endl;
			break;
		case Mar:
			std::cout << "Март" << std::endl;
			break;
		case Apr:
			std::cout << "Апрель" << std::endl;
			break;
		case May:
			std::cout << "Май" << std::endl;
			break;
		case Jun:
			std::cout << "Июнь" << std::endl;
			break;
		case Jul:
			std::cout << "Июль" << std::endl;
			break;
		case Aug:
			std::cout << "Август" << std::endl;
			break;
		case Sep:
			std::cout << "Сентябрь" << std::endl;
			break;
		case Oct:
			std::cout << "Октябрь" << std::endl;
			break;
		case Nov:
			std::cout << "Ноябрь" << std::endl;
			break;
		case Dec:
			std::cout << "Декабрь" << std::endl;
			break;
		case 0: 
			std::cout << "До свидания!" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	} while (val != 0);

}
