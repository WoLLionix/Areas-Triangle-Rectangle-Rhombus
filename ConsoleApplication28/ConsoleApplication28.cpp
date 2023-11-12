#include <iostream>

using namespace std;

class Triangle 
{
    private:
        double base;
        double height;
        double area;

    public:
        Triangle(double b, double h) : base(b), height(h) 
        {
            area = 0.5 * base * height;
        }

        double get_area() 
        {
            return area;
        }
};

class Rectangle 
{
    private:
        double length;
        double width;
        double area;

    public:
        Rectangle(double l, double w) : length(l), width(w) 
        {
            area = length * width;
        }

        double get_area() 
        {
            return area;
        }
};

class Rhombus 
{
    private:
        double diagonal1;
        double diagonal2;
        double area;

    public:
        Rhombus(double d1, double d2) : diagonal1(d1), diagonal2(d2) 
        {
            area = 0.5 * diagonal1 * diagonal2;
        }

        double get_area() 
        {
            return area;
        }
};

void printAreas(double triangle_base, double triangle_height, double rectangle_length, double rectangle_width, double rhombus_diagonal1, double rhombus_diagonal2) 
{

    Triangle triangle(triangle_base, triangle_height);
    Rectangle rectangle(rectangle_length, rectangle_width);
    Rhombus rhombus(rhombus_diagonal1, rhombus_diagonal2);

    cout << "Triangle Area: " << triangle.get_area() << endl;
    cout << "Rectangle Area: " << rectangle.get_area() << endl;
    cout << "Rhombus Area: " << rhombus.get_area() << endl;
}

int main() {

    printAreas(6, 4, 7, 3, 8, 6);

    return 0;
}