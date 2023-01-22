#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>
#include <iostream>
#include <fstream>

//В этом задании вы будете читать адреса из файла и выводить их в другой файл в другом формате.
//
//Вам дан файл in.txt, в котором находится N адресов.Число N идёт первым в файле.После числа N располагаются N блоков по 4 строки в каждом.Каждый блок состоит из следующих строк : название города, название улицы, номер дома, номер квартиры.
//
//Задача программы заключается в том, чтобы считать адреса из файла in.txt и вывести их в файл out.txt в другом формате и в обратном порядке.Не забудьте вывести количество адресов в начале.
//
//Формат вывода адреса : <название города>, <название улицы>, <номер дома>, <номер квартиры>.

class Address
{
private:
    std::string City;
    std::string Street;
    std::string House;
    std::string Apartment;
public:
    Address(std::string city, std::string street, std::string house, std::string apartment)
    {
        City = city;
        Street = street;
        House = house;
        Apartment = apartment;
    }

    Address()
    {

    }

    std::string GetAddress()
    {
        std::string str = City + ", " + Street + ", " + House + ", " + Apartment;
        return str;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // N адресов
    int n;

    std::ifstream fin("in.txt");

    fin >> n;

    // Первый массив
    Address *arr = new Address[n];

    for (int i = 0; i < n; i++)
    {
        std::string city;
        std::string street;
        std::string house;
        std::string apartment;
        fin >> city;
        fin >> street;
        fin >> house;
        fin >> apartment;
        arr[i] = Address(city, street, house, apartment);
    }

    fin.close();


    // Запись в файл (адреса выводим наоборот)
    std::ofstream fout("out.txt");
    fout << n << std::endl;
    for (int i = n-1; i >= 0; i--)
    {
        fout << arr[i].GetAddress() << std::endl;
    }
    fout << std::endl;
    fout.close();

    delete[] arr;

    std::cout << "Создан файл out.txt!";
}
