#include "Circle.h"

Circle::Circle()
{
    r=0;
}


Circle::Circle(int cx, int cy, float r):Shape(cx,cy)
{
    this->r=r;
}

Circle::~Circle()
{

}