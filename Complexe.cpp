// IsaiaTahina 12*02*2025
#include <iostream>

#include "isa.h"
using namespace std;
using namespace isa;

Complexe ::Complexe()
{

}
Complexe ::~Complexe()
{

}

Complexe Complexe ::addition(Complexe c )
{
    Complexe r;
    r.x= x+c.x;
    r.y= y+c.y;
    return r;
}
Complexe Complexe :: soustraction(Complexe c)
{
    Complexe r;
    r.x= x-c.x;
    r.y= y-c.y;
    return r;
}

Complexe Complexe :: multiplication(Complexe c)
{
    Complexe r;
    r.x= (x*c.x)-(y*c.y);
    r.y= (x*c.y)+(y*c.x);
    return r;
}

Complexe Complexe :: division(Complexe c)
{
    Complexe r;
    float norm=((c.x*c.x )+(c.y*c.y));
    r.x= ((x*c.x)+(y*c.y))/norm;
    r.y= ((y*c.x)-(x*c.y))/norm;
    return r;

}

//---------------------------------------------------

void Complexe::afficher()
{
    cout <<"a+ib=" <<x<<"+"<<y <<"i"<< endl;
}


 int Complexe::setx(int n1)
{
    return x=n1;
}

int Complexe::sety(int n1)
{
   return y=n1;
}

int Complexe::getx()
{
    return x;
}

int Complexe::gety()
{
    return y;
}
