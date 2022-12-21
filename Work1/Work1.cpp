#include <iostream>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");

    // Размер первого массива
    int size1;
    // Размер второго массива
    int size2;

    std::ifstream fin("C:\\Users\\Ann\\Desktop\\HomeWorks\\Work1\\x64\\Debug\\in.txt");
    // Массивы сразу пишем в правильной очередности чисел, со сдвигом вправо и со сдвигом влево
    fin >> size1;
    // Первый массив
    int* arr1 = new int[size1];
    for (int i = 0; i < size1; i++)
    {        
        if (i == 0)
        {
            fin >> arr1[size1-1];
        }
        else
        {
            fin >> arr1[i-1];
        }
    }
        fin >> size2;
        // Второй массив
        int* arr2 = new int[size2];
        for (int j= 0; j < size2; j++) 
        {
            if (j == size2 - 1)
            {
                fin >> arr2[0];
            }
            else
            {
                fin >> arr2[j + 1];
            }
        }
    
    fin.close();


    // Запись в файл (массивы выводим наоборот)
    std::ofstream fout("C:\\Users\\Ann\\Desktop\\HomeWorks\\Work1\\x64\\Debug\\out.txt");
    fout << size2 << std::endl;
    for (int i = 0; i < size2; i++)
    {
        fout << arr2[i] << " ";
    }
    fout << std::endl;

    fout << size1 << std::endl;
    for (int i = 0; i < size1; i++)
    {
        fout << arr1[i] << " ";
    }

    fout << std::endl;
    fout.close();

    delete[] arr1;
    delete[] arr2;

    std::cout << "Готово!";
    return 0;
}