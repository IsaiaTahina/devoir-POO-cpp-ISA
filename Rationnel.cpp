// IsaiaTahina 12*02*2025
#include <iostream>
#include "isa.h"
using namespace std;
using namespace isa;


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
    r.p=(n.p*q)+(p*n.q);
    r.q=n.q*q;
   return r;
 }

Rationnel Rationnel::soustraction( const Rationnel n)
{
    Rationnel r;
    r.p=(p*n.q)-(n.p*q) ;
    r.q=n.q*q;
    return r;
    
}
Rationnel Rationnel::division( const Rationnel n)
{
    Rationnel r;
    r.q=(n.p*q);
    r.p=n.q*p;
    return r;
}
Rationnel Rationnel::multiplication( const Rationnel n)
{
    Rationnel r;
    r.p=n.p*p;
    r.q=n.q*q;
    return r;
}

void Rationnel::afficher()
{
    cout <<"p/q=" <<p<<"/"<<q<< endl;
}


 int Rationnel::setp(int n1)
{
    return p=n1;
}

int Rationnel::setq(int n1)
{
   return q=n1;
}

int Rationnel::getp()
{
    return p;
}

int Rationnel::getq()
{
    return q;
}
