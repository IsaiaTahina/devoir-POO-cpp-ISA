#include "isa.h"
#include<iostream>
using namespace std;
using namespace isa;

// IsaiaTahina 06*02*2025
int main()
{
    ComplexeRationnel cr1;
    ComplexeRationnel cr2;
    ComplexeRationnel cr3;

    cr1.setanum(1);
    cr1.setaden(1);
    cr1.setbnum(1);
    cr1.setbden(1);

    cr2.setanum(1);
    cr2.setaden(1);
    cr2.setbnum(1);
    cr2.setbden(1);

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

    r1.setNum(4);
    r1.setDen(1);

    r2.setNum(2);
    r2.setDen(1);

r3=r2.soustraction(r1);  // r2-r1
r3.afficher();

r3=r2.addition(r1);
r3.afficher();

r3=r2.multiplication(r1);
r3.afficher();

r3=r2.division(r1);  // r2/r1
r3.afficher();

return 0;
}
