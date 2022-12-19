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
    fin >> size1;
    // Первый массив
    int* arr1 = new int[size1];
    for (int i = 0; i < size1; i++) 
        fin >> arr1[i];

        fin >> size2;
        // Второй массив
        int* arr2 = new int[size2];
        for (int j= 0; j < size2; j++) 
            fin >> arr2[j];
    
    fin.close();

    // Запись в файл
    std::ofstream fout("C:\\Users\\Ann\\Desktop\\HomeWorks\\Work1\\x64\\Debug\\out.txt");
    fout << size1 << std::endl;
    for (int i = size1 - 1; i >= 0; i--)
    {
        fout << arr1[i] << " ";
    }
    fout << std::endl;

    fout << size2 << std::endl;
    for (int i = size2 - 1; i >= 0; i--)
    {
        fout << arr2[i] << " ";
    }
    fout << std::endl;
    fout.close();

    delete[] arr1;
    delete[] arr2;

    std::cout << "Готово!";
    return 0;
}