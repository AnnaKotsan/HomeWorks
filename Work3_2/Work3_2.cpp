#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>

//В этом задании вам нужно будет создать класс - счётчик
//
//Создайте класс Counter.Класс должен выполнять функцию счётчика, для этого он должен предоставлять :
//
//возможность увеличить своё значение на 1
//возможность уменьшить своё значение на 1
//возможность посмотреть своё текущее значение
//возможность создания экземпляра класса с начальным значением по умолчанию(1)
//возможность создания экземпляра класса с инициализирующим начальным значением
//Обратите внимание на то, что у внешнего кода не должно быть возможности изменить внутреннее значение счётчика напрямую
//
//Напишите код, демонстрирующий работу класса Counter.Спросите у пользователя, хочет ли он указать начальное значение для счётчика.Если хочет, дайте ему возможность это сделать.Затем предоставьте пользователю возможность вводить команды :
//
//+: увеличьте счётчик на 1
//- : уменьшите счётчик на 1
//= : выведите текущее значение счётчика
//x : завершите работу программы

class Counter
{
private: int count;

public:

    Counter()
    {
        count = 1;
    }

    Counter(int input)
    {
        count = input;
    }

    void increasecount()
    {
        count++;
    }

    void decreasecount()
    {
        count--;
    }

    int showcount()
    {
        return count;
    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter counter;
    char input;
    std::string start;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> start;
    if (start == "да")
    {
        int count;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
        counter = (count);
    }
    else if (start == "нет")
    {
        std::cout << "Начальное значение счётчика - 1. \n";
    }
    do
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): \n";
        std::cin >> input;
        switch (input)
        {
        case '+':
            counter.increasecount();
            break;
        case '-':
            counter.decreasecount();
            break;
        case '=':
            std::cout << counter.showcount() << "\n";
            break;
        case 'x':
            std::cout << "До свидания!\n";
            break;
        default:
            std::cout << "Некорректная команда!\n";
            break;
        }
    } while (input != 'x');

}
