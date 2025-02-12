#include "isa.h"
#include<iostream>
using namespace std;
using namespace isa;

// IsaiaTahina 12*02*2025
int main()
{
    ComplexeRationnel cr1;
    ComplexeRationnel cr2;
    ComplexeRationnel cr3;

    cr1.setx(1);
    cr1.sety(1);
    cr1.setp(1);
    cr1.setq(1);

    cr2.setx(1);
    cr2.sety(1);
    cr2.setp(1);
    cr2.setq(1);

cr3=cr2.soustraction(cr1);  // cr2-cr1
cr3.afficher();

cr3=cr2.addition(cr1);
cr3.afficher();

cr3=cr2.multiplication(cr1);
cr3.afficher();

cr3=cr2.division(cr1);  // cr2/cr1
cr3.afficher();

cout <<"---------------------++++++++++++++++++++-----------" << endl<< endl;

//-----------------------------------------------
Complexe c1;
    Complexe c2;
    Complexe c3;

    c1.setx(4);
    c1.sety(0);

    c2.setx(2);
    c2.sety(0);

c3=c2.soustraction(c1);  // c2-c1
c3.afficher();

c3=c2.addition(c1);
c3.afficher();

c3=c2.multiplication(c1);
c3.afficher();

c3=c2.division(c1);  // c2/c1
c3.afficher();

cout <<"---------------------++++++++++++++++++++-----------" << endl<< endl;

//-----------------------------------------------

    Rationnel r1=Rationnel();
    Rationnel r2=Rationnel();
    Rationnel r3=Rationnel();

    r1.setp(4);
    r1.setq(1);

    r2.setp(2);
    r2.setq(1);

r3=r2.soustraction(r1);  // r2-r1
r3.afficher();

r3=r2.addition(r1);
r3.afficher();

r3=r2.multiplication(r1);
r3.afficher();

r3=r2.division(r1);  // r2/r1
r3.afficher();

//---------------------------------------------
cout <<"---------------------++++++++++++++++++++-----------" << endl<< endl;

ComplexeRationnel cz1;
ComplexeRationnel cz2;
ComplexeRationnel cz3;


cz1=Arithmetic::additionner(r1,c1);
cz2=Arithmetic::additionner(cr1,c1);
cz2=Arithmetic::additionner(cr1,r1);

cz1.afficher();
cz2.afficher();
cz2.afficher();

return 0;
}
