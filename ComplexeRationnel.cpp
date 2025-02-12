// IsaiaTahina 12*02*2025
#include <iostream>
#include "isa.h"
using namespace std;
using namespace isa;

ComplexeRationnel::ComplexeRationnel() 
{
    Complexe();
    Rationnel();
}

ComplexeRationnel::~ComplexeRationnel()
{

}

ComplexeRationnel ComplexeRationnel:: addition(ComplexeRationnel cr)
{
    ComplexeRationnel r;
    r.x= (x*cr.y)+(y*cr.x);
    r.y= y*cr.y;

    r.p= (p*cr.q)+(q*cr.p);
    r.q= q*cr.q;

    return r;
}

ComplexeRationnel ComplexeRationnel::soustraction(ComplexeRationnel cr)
{
       ComplexeRationnel r;
    r.x= (x*cr.y)-(y*cr.x);
    r.y= y*cr.y;

    r.p= (p*cr.q)-(q*cr.p);
    r.q= q*cr.q;

    return r;
}

ComplexeRationnel ComplexeRationnel:: multiplication(ComplexeRationnel cr)
{
        ComplexeRationnel r;
    r.x= ((x*cr.x)*(q*cr.q))-((y*cr.y)*(p*cr.p));
    r.y= (y*cr.y)*(q*cr.q);

    r.p= ((x*cr.p)*(q*cr.y))+((y*cr.q)*(p*cr.x));
    r.q= (y*cr.y)*(q*cr.q);

    return r;
}

ComplexeRationnel ComplexeRationnel:: division(ComplexeRationnel cr)
{

        ComplexeRationnel r;
    r.x=(((x*cr.x)*(q*cr.q))+((y*cr.y)*(p*cr.p)))*(cr.y*cr.y)*(cr.q*cr.q);
    r.y= ((y*cr.y)*(q*cr.q))*(((cr.x*cr.x)*(cr.q*cr.q))+((cr.y*cr.y)*(cr.p*cr.p)));

    r.p= (((x*cr.p)*(q*cr.y))-((y*cr.q)*(p*cr.x)))*((cr.y*cr.y)*(cr.q*cr.q));
    r.q= (((cr.x*cr.x)*(cr.q*cr.q))+((cr.y*cr.y)*(cr.p*cr.p)))*((y*cr.q)*(q*cr.y));
  
  return r;
}


//----------------------------------------------------------
void ComplexeRationnel::afficher()
{
    cout <<"x/y +i(p/q)=" <<x<<"/"<<y<<" +("<<p<<"/"<<q <<")i"<< endl;
}



