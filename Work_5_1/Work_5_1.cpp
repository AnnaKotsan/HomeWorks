#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>

//В этом задании вы построите первую простую иерархию классов для заданной предметной области.
//
//Предметная область выглядит следующим образом : есть сущность фигура.Фигуры бывают двух типов : треугольник и четырёхугольник.У фигуры есть количество сторон.Для неизвестной фигуры будем считать это количество равным нулю.У треугольника три стороны, у четырёхугольника четыре стороны.У любой фигуры мы хотим узнавать количество её сторон, но мы не должны быть способны изменить количество сторон для заданной фигуры извне.
//
//Задача : спроектировать и реализовать классы, описывающие предметную область.Продемонстрируйте их работу : создайте по одному экземпляру каждого класса и выведите информацию о количестве его сторон на консоль.


class Figure
{
protected:
    int CountSides;
    std::string NameFigure;
public:
    Figure(std::string namefigure)
    {
        CountSides = 0;
        NameFigure = namefigure;
    }

    std::string GetName()
    {
        return NameFigure;
    }
    
    int GetCountSides()
    {
        return CountSides;
    }
};

class Triangle : public Figure
{
public:
    Triangle(int countsides, std::string namefigure) : Figure(namefigure)
    {        
            CountSides = countsides;
    }
};

class Quadrangle : public Figure
{
public:
    Quadrangle(int countsides, std::string namefigure) : Figure(namefigure)
    {
        CountSides = countsides;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Количество сторон: \n";
    Figure figure = Figure("Фигура");
    Triangle triangle = Triangle(3, "Треугольник");
    Quadrangle quadrangle = Quadrangle(4, "Четырехугольник");
    std::cout << figure.GetName() << ": " << figure.GetCountSides() << std::endl;
    std::cout << triangle.GetName() << ": " << triangle.GetCountSides() << std::endl;
    std::cout << quadrangle.GetName() << ": " << quadrangle.GetCountSides() << std::endl;
}
