// IsaiaTahina 06*02*2025
#include <iostream>
#include "isa.h"
using namespace std;
using namespace isa;

ComplexeRationnel::ComplexeRationnel()
{

}

ComplexeRationnel::~ComplexeRationnel()
{

}

ComplexeRationnel ComplexeRationnel:: addition(ComplexeRationnel cr)
{
    ComplexeRationnel r;
    r.anum= (anum*cr.aden)+(aden*cr.anum);
    r.aden= aden*cr.aden;

    r.bnum= (bnum*cr.bden)+(bden*cr.bnum);
    r.bden= bden*cr.bden;

    return r;
}

ComplexeRationnel ComplexeRationnel::soustraction(ComplexeRationnel cr)
{
       ComplexeRationnel r;
    r.anum= (anum*cr.aden)-(aden*cr.anum);
    r.aden= aden*cr.aden;

    r.bnum= (bnum*cr.bden)-(bden*cr.bnum);
    r.bden= bden*cr.bden;

    return r;
}

ComplexeRationnel ComplexeRationnel:: multiplication(ComplexeRationnel cr)
{
        ComplexeRationnel r;
    r.anum= ((anum*cr.anum)*(bden*cr.bden))-((aden*cr.aden)*(bnum*cr.bnum));
    r.aden= (aden*cr.aden)*(bden*cr.bden);

    r.bnum= ((anum*cr.bnum)*(bden*cr.aden))+((aden*cr.bden)*(bnum*cr.anum));
    r.bden= (aden*cr.aden)*(bden*cr.bden);

    return r;
}

ComplexeRationnel ComplexeRationnel:: division(ComplexeRationnel cr)
{

        ComplexeRationnel r;
    r.anum=(((anum*cr.anum)*(bden*cr.bden))+((aden*cr.aden)*(bnum*cr.bnum)))*(cr.aden*cr.aden)*(cr.bden*cr.bden);
    r.aden= ((aden*cr.aden)*(bden*cr.bden))*(((cr.anum*cr.anum)*(cr.bden*cr.bden))+((cr.aden*cr.aden)*(cr.bnum*cr.bnum)));

    r.bnum= (((anum*cr.bnum)*(bden*cr.aden))-((aden*cr.bden)*(bnum*cr.anum)))*((cr.aden*cr.aden)*(cr.bden*cr.bden));
    r.bden= (((cr.anum*cr.anum)*(cr.bden*cr.bden))+((cr.aden*cr.aden)*(cr.bnum*cr.bnum)))*((aden*cr.bden)*(bden*cr.aden));
  
  return r;
}


//----------------------------------------------------------
void ComplexeRationnel::afficher()
{
    cout <<"anum/aden +i(bnum/bden)=" <<anum<<"/"<<aden<<" +("<<bnum<<"/"<<bden <<")i"<< endl;
}


int ComplexeRationnel::setanum(int n1)
{
    return anum=n1;
}

int ComplexeRationnel::setaden(int n1)
{
    return aden=n1;
}

int ComplexeRationnel::setbnum(int n1)
{
    return bnum=n1;
}

int ComplexeRationnel::setbden(int n1)
{
    return bden=n1;
}


int ComplexeRationnel::getanum()
{
    return anum;
}

int ComplexeRationnel::getaden()
{
    return aden;
}

int ComplexeRationnel::getbnum()
{
    return bnum;
}

int ComplexeRationnel::getbden()
{
    return bden;
}
