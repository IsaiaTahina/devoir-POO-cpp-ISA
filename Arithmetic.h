// IsaiaTahina 12*02*2025

#include "isa.h"
using namespace isa;
class Arithmetic
{
    public:
       static int additionner(int x,int y);
       static float additionner(float x,int y);
       static float additionner(int y,float x);
       static float additionner(float y,float x);

       static Complexe additionner(Complexe x,int y);
       static Complexe additionner(int y,Complexe x);
       static ComplexeRationnel additionner(Complexe x,Rationnel y);
       static ComplexeRationnel additionner(Rationnel y,Complexe x);

       static ComplexeRationnel additionner(ComplexeRationnel cr,Rationnel y);
       static ComplexeRationnel additionner(Rationnel y,ComplexeRationnel cr);

       static ComplexeRationnel additionner(ComplexeRationnel cr,Complexe z);
       static ComplexeRationnel additionner(Complexe z y,ComplexeRationnel cr);
};
 

