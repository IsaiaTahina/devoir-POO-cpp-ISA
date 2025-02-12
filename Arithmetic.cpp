#include <iostream>
#include "isa.h"
using namespace isa;
// IsaiaTahina 12*02*2025

int Arithmetic::additionner(int x,int y)
{
    return x+y;
}
float Arithmetic::additionner(float x,int y)
{
    return x+y;
}

float Arithmetic:: additionner(int y,float x)
{
    return  y+x;
}

 Complexe  Arithmetic::additionner(Complexe z,int y)
 {
    Complexe r;
    r.setx(z.getx()+y);
    r.sety(z.gety());
    return r;
 }

 Complexe Arithmetic::additionner(int y,Complexe z)
 {
   Complexe r;
   r.setx(z.getx()+y);
   r.sety(z.gety());
   return r;
 }



 ComplexeRationnel Arithmetic::additionner(Complexe z,Rationnel y)
 {
    ComplexeRationnel r;
    r.setx((z.getx()*y.getq())+y.getp());
    r.sety(y.getq());
    r.setp(z.gety());
    r.setq(1);
    return r;
 }

 ComplexeRationnel Arithmetic::additionner(Rationnel y,Complexe z)
 {
   ComplexeRationnel r;
   r.setx((z.getx()*y.getq())+y.getp());
   r.sety(y.getq());
   r.setp(z.gety());
   r.setq(1);
   return r;
}

 ComplexeRationnel Arithmetic::additionner(ComplexeRationnel cr,Rationnel y)
 {
   ComplexeRationnel z;
   z.setx((cr.getx()*y.getq())+(y.getp()*cr.gety()));
   z.sety(y.getq()*cr.gety());
   z.setp(cr.getp());
   z.setq(cr.getq());
   return z;
 }
 ComplexeRationnel Arithmetic::additionner(Rationnel y,ComplexeRationnel cr)
 {
   ComplexeRationnel z;
   z.setx((cr.getx()*y.getq())+(y.getp()*cr.gety()));
   z.sety(y.getq()*cr.gety());
   z.setp(cr.getp());
   z.setq(cr.getq());
   return z;
 }

ComplexeRationnel Arithmetic:: additionner(ComplexeRationnel cr,Complexe z)
{
   ComplexeRationnel zz;
   zz.setx((cr.gety()*z.getx())+cr.getx());
   zz.sety(cr.gety());
   zz.setp((cr.getq()*z.gety()+cr.getp()));
   zz.setq(cr.getq());
   return zz;
}

ComplexeRationnel Arithmetic:: additionner(Complexe z ,ComplexeRationnel cr)
{
   ComplexeRationnel zz;
   zz.setx((cr.gety()*z.getx())+cr.getx());
   zz.sety(cr.gety());
   zz.setp((cr.getq()*z.gety()+cr.getp()));
   zz.setq(cr.getq());
   return zz;
}
