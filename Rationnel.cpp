#include <iostream>
#include"Rationnel.h"

using namespace std;

/* Point Point::operator+(const Point &P)
{
    Point C;
   C.setxy(x+P.x ,y+P.y);
  return C;
}
namespace isa
class arithmetique



 */
       Rationnel:: Rationnel()
        {
// tandremo hadino midefinisser an reto fa  so de oe vo declare ftsn tonga de reference indefinis
        }
       Rationnel:: ~Rationnel()
        {
// tandremo hadino midefinisser an reto fa  so de oe vo declare ftsn tonga de reference indefinis

        }


Rationnel Rationnel::addition(const Rationnel n)
{
    Rationnel r;
    r.num=(n.num*den)+(num*n.den);
    r.den=n.den*den;
   return r;
 }

Rationnel Rationnel::soustraction( const Rationnel n)
{
    Rationnel r;
    r.num=(num*n.den)-(n.num*den) ;
    r.den=n.den*den;
    return r;
    
}
Rationnel Rationnel::division( const Rationnel n)
{
    Rationnel r;
    r.den=(n.num*den);
    r.num=n.den*num;
    return r;
}
Rationnel Rationnel::multiplication( const Rationnel n)
{
    Rationnel r;
    r.num=n.num*num;
    r.den=n.den*den;
    return r;
}

void Rationnel::afficher()
{
    cout <<"p/q=" <<num<<"/"<<den<< endl;
}


 int Rationnel::setNum(int n1)
{
    return num=n1;
}

int Rationnel::setDen(int n1)
{
   return den=n1;
}

int Rationnel::getNum()
{
    return num;
}

int Rationnel::getDen()
{
    return den;
}