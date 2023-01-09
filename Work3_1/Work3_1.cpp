#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>

//Калькулятор двух чисел
//В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу
//
//Создайте класс Calculator.Класс должен содержать два поля num1 и num2 для хранения дробных чисел.Также класс должен содержать следующие методы :
//
//double add() - метод должен возвращать результат сложения num1 и num2
//double multiply() - метод должен возвращать результат перемножения num1 и num2
//double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
//double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
//double divide_1_2() - метод должен возвращать результат деления num1 на num2
//double divide_2_1() - метод должен возвращать результат деления num2 на num1
//bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
//bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
//Напишите код, демонстрирующий работу класса Calculator.Попросите пользователя ввести два числа.После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен
//
//Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль

class Calculator
{
private:
    double num1;
    double num2;

public:
    double add()
    {
        return num1 + num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double subtract_1_2()
    {
        return num1 - num2;
    }

    double subtract_2_1()
    {
        return num2 - num1;
    }

    double divide_1_2()
    {
        return num1 / num2;
    }

    double divide_2_1()
    {
        return num2 / num1;
    }

    bool set_num1(double num1)
    {
        if (num1 != 0)
        {
            this->num1 = num1;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool set_num2(double num2)
    {
        if (num2 != 0)
        {
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Calculator calculator;

    // Для реализации бесконечного цикла
    bool flag = true;
    while (flag == true)
    {
        // Обработка первого числа пока пользователь не введет верное значение
        double num1=1;
        do
        {
            std::cout << "Введите num1\n";
            std::cin >> num1;
            if (calculator.set_num1(num1) == false)
            {
                std::cout << "Неверный ввод!\n";
            }
        } while (num1 == 0);

        // Обработка второго числа пока пользователь не введет верное значение
        double num2 = 1;
        do
        {
            std::cout << "Введите num2\n";
            std::cin >> num2;
            if (calculator.set_num2(num2) == false)
            {
                std::cout << "Неверный ввод!\n";
            }
        } while (num2 == 0);

        std::cout << "num1 + num2 = " << calculator.add() << "\n";

        std::cout << "num1 - num2 = " << calculator.subtract_1_2() << "\n";

        std::cout << "num2 - num1 = " << calculator.subtract_2_1() << "\n";

        std::cout << "num1 * num2 = " << calculator.multiply() << "\n";

        std::cout << "num1 / num2 = " << calculator.divide_1_2() << "\n";

        std::cout << "num2 / num1 = " << calculator.divide_2_1() << "\n";
    }

}

