#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape
{
    private:
         float r;
    public:
        Circle();
        Circle(int cx, int cy, float r);
        void setr(float);
        float getr();
        virtual ~Circle();


};

#endif // CIRCLE_H