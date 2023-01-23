#include <Windows.h> // для SetConsoleCP() и SetConsoleOutputCP()
#include <iostream>
#include <iostream>
#include <string> 

//В этом задании вы усложните иерархию классов для усложнённой предметной области.
//У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур.Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон(a, b, c) и значениях его трёх углов(A, B, C).В четырёхугольнике вы храните информацию о длине его четырёх сторон(a, b, c, d) и значениях его четырёх углов(A, B, C, D).
//Также у вас появляются более конкретные фигуры :
//прямоугольный треугольник(угол C всегда равен 90);
//равнобедренный треугольник(стороны a и c равны, углы A и C равны);
//равносторонний треугольник(все стороны равны, все углы равны 60);
//прямоугольник(стороны a, c и b, d попарно равны, все углы равны 90);
//квадрат(все стороны равны, все углы равны 90);
//параллелограмм(стороны a, c и b, d попарно равны, углы A, C и B, D попарно равны);
//ромб(все стороны равны, углы A, C и B, D попарно равны).
//Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.
//Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям.Например, нельзя создать квадрат с разными углами.Геометрические соотношения проверять не нужно.Например, сумма углов в треугольнике может быть не равна 180.
//Задача: спроектировать и реализовать классы, описывающие предметную область.Продемонстрируйте их работу : создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов.Значения используйте произвольные.
//Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.
//Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

class Figure
{
protected:
    std::string NameFigure;
    int sideA;
    int sideB;
    int sideC;
    int sideD;
    int cornerA;
    int cornerB;
    int cornerC;
    int cornerD;
public:
    Figure(std::string namefigure)
    {
        NameFigure = namefigure;
    }

    std::string GetName()
    {
        return NameFigure + ": \n";
    }

    
};

/// <summary> Треугольник </summary>
class Triangle : public Figure
{

public:
    Triangle(std::string namefigure, int a, int b, int c, int A, int B, int C) : Figure(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = c;
        cornerA = A;
        cornerB = B;
        cornerC = C;
    }
    
    Triangle(std::string namefigure) : Figure(namefigure)
    {}

    std::string GetSidesTriangle()
    {
        std::string temp = "Стороны: a=" + std::to_string(sideA) + " b=" + std::to_string(sideB) + " c=" + std::to_string(sideC) + "\n";
        return temp;
    }

    std::string GetCornerTriangle()
    {
        std::string temp = "Углы: А=" + std::to_string(cornerA) + " B=" + std::to_string(cornerB) + " C=" + std::to_string(cornerC) + "\n";
        return temp;
    }
};


/// <summary> Прямоугольный треугольник </summary>
class RightTriangle : public Triangle
{

public:
    RightTriangle(std::string namefigure, int a, int b, int c, int A, int B) : Triangle(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = c;
        cornerA = A;
        cornerB = B;
        cornerC = 90;
    }
};

/// <summary> Равнобедренный треугольник </summary>
class IsoscelesTriangle : public Triangle
{

public:
    IsoscelesTriangle(std::string namefigure, int a, int b, int A, int B) : Triangle(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = a;
        cornerA = A;
        cornerB = B;
        cornerC = A;
    }
};

/// <summary> Равносторонний треугольник </summary>
class EquilateralTriangle : public Triangle
{

public:
    EquilateralTriangle(std::string namefigure, int a, int A) : Triangle(namefigure)
    {
        sideA = a;
        sideB = a;
        sideC = a;
        cornerA = A;
        cornerB = A;
        cornerC = A;
    }
};

/// <summary> Четырехугольник </summary>
class Quadrangle : public Figure
{
public:
    Quadrangle(std::string namefigure, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = c;
        sideD = d;
        cornerA = A;
        cornerB = B;
        cornerC = C;
        cornerD = D;
    }

    Quadrangle(std::string namefigure) : Figure(namefigure)
    {}

    std::string GetSidesQuadrangle()
    {
        std::string temp = "Стороны: a=" + std::to_string(sideA) + " b=" + std::to_string(sideB) + " c=" + std::to_string(sideC) + " d=" + std::to_string(sideD) + "\n";
        return temp;
    }

    std::string GetCornerQuadrangle()
    {
        std::string temp = "Углы: А=" + std::to_string(cornerA) + " B=" + std::to_string(cornerB) + " C=" + std::to_string(cornerC) + " D=" + std::to_string(cornerD) + "\n";
        return temp;
    }
};

/// <summary> Прямоугольник </summary>
class Rectangle_ : public Quadrangle
{
public:
    Rectangle_(std::string namefigure, int a, int b) : Quadrangle(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = a;
        sideD = b;
        cornerA = 90;
        cornerB = 90;
        cornerC = 90;
        cornerD = 90;
    }
};

/// <summary> Квадрат </summary>
class Square : public Quadrangle
{
public:
    Square(std::string namefigure, int a) : Quadrangle(namefigure)
    {
        sideA = a;
        sideB = a;
        sideC = a;
        sideD = a;
        cornerA = 90;
        cornerB = 90;
        cornerC = 90;
        cornerD = 90;
    }
};

/// <summary> Параллелограмм </summary>
class Parallelogram : public Quadrangle
{
public:
    Parallelogram(std::string namefigure, int a, int b, int A, int B) : Quadrangle(namefigure)
    {
        sideA = a;
        sideB = b;
        sideC = a;
        sideD = b;
        cornerA = A;
        cornerB = B;
        cornerC = A;
        cornerD = B;
    }
};

/// <summary> Ромб </summary>
class Rhombus : public Quadrangle
{
public:
    Rhombus(std::string namefigure, int a, int A, int B) : Quadrangle(namefigure)
    {
        sideA = a;
        sideB = a;
        sideC = a;
        sideD = a;
        cornerA = A;
        cornerB = B;
        cornerC = A;
        cornerD = B;
    }
};

void print_info(Triangle* triangle, RightTriangle* righttriangle, IsoscelesTriangle* isoscelestriangle, EquilateralTriangle* equilateraltriangle,
    Quadrangle* quadrangle, Rectangle_* rectangle, Square* square, Parallelogram* parallelogram, Rhombus* rhombus)
{
    std::cout << triangle->GetName() << triangle->GetSidesTriangle();
    std::cout << triangle->GetCornerTriangle() << std::endl;

    std::cout << righttriangle->GetName() << righttriangle->GetSidesTriangle();
    std::cout << righttriangle->GetCornerTriangle() << std::endl;

    std::cout << isoscelestriangle->GetName() << isoscelestriangle->GetSidesTriangle();
    std::cout << isoscelestriangle->GetCornerTriangle() << std::endl;

    std::cout << equilateraltriangle->GetName() << equilateraltriangle->GetSidesTriangle();
    std::cout << equilateraltriangle->GetCornerTriangle() << std::endl;

    std::cout << quadrangle->GetName() << quadrangle->GetSidesQuadrangle();
    std::cout << quadrangle->GetCornerQuadrangle() << std::endl;

    std::cout << rectangle->GetName() << rectangle->GetSidesQuadrangle();
    std::cout << rectangle->GetCornerQuadrangle() << std::endl;

    std::cout << square->GetName() << square->GetSidesQuadrangle();
    std::cout << square->GetCornerQuadrangle() << std::endl;

    std::cout << parallelogram->GetName() << parallelogram->GetSidesQuadrangle();
    std::cout << parallelogram->GetCornerQuadrangle() << std::endl;

    std::cout << rhombus->GetName() << rhombus->GetSidesQuadrangle();
    std::cout << rhombus->GetCornerQuadrangle() << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle triangle = Triangle("Треугольник",10,20,30,50,60,70);
    RightTriangle righttriangle = RightTriangle("Прямоугольный треугольник", 10, 20, 30, 50, 60);
    IsoscelesTriangle isoscelestriangle = IsoscelesTriangle("Равнобедренный треугольник", 10, 20, 50, 60);
    EquilateralTriangle equilateraltriangle = EquilateralTriangle("Равносторонний треугольник", 30, 60);
    Quadrangle quadrangle = Quadrangle("Четырехугольник",10,20,30,40,50,60,70,80);
    Rectangle_ rectangle = Rectangle_("Прямоугольник", 10, 20);
    Square square = Square("Квадрат", 20);
    Parallelogram parallelogram = Parallelogram("Параллелограмм", 20, 30, 30, 40);
    Rhombus rhombus = Rhombus("Ромб", 30, 30, 40);
    print_info(&triangle,&righttriangle,&isoscelestriangle,&equilateraltriangle,
    &quadrangle, &rectangle, &square,&parallelogram,&rhombus);
}
