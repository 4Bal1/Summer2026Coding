#include "Triangle.h"

Triangle::Triangle(double Base, double Height)
{
    this->Base = Base;
    this->Height = Height;
    this->Area = 0;
}

Triangle::Triangle()
{
    this->Base = Base;
    this->Height = Height;
    this->Area = 0;
}

void Triangle::CalcArea()
{
    this->Area=(this->Base * this->Height) / 2;

}

double Triangle::getArea()
{
    return this->Area;
}

void Triangle::setBase(double base)
{
    this->Base = base;
}

void Triangle::setHeight(double height)
{
    this->Height = height;
}