
// IsaiaTahina 12*02*2025
namespace isa
{
class Complexe
{
    protected:
        int x;
        int y;

    public:Complexe();
        ~Complexe();

        Complexe addition(Complexe c);
        Complexe soustraction(Complexe c);
        Complexe division(Complexe c);
        Complexe multiplication(Complexe c);

        void afficher();

        int setx(int n1);
        int sety(int n1);

        int getx();
        int gety();
};

class Rationnel
{
    protected:
        int p;
        int q;

    public:Rationnel();
        ~Rationnel();

        Rationnel addition(const Rationnel n);
        Rationnel soustraction(const Rationnel n);
        Rationnel division(const Rationnel n);
        Rationnel multiplication(const Rationnel n);

        void afficher();

        int setp(int n1);
        int setq(int n1);

        int getp();
        int getq();
};


class ComplexeRationnel:public Complexe, public Rationnel
{
    public:ComplexeRationnel();
        ~ComplexeRationnel();

        ComplexeRationnel addition(ComplexeRationnel cr);
        ComplexeRationnel soustraction(ComplexeRationnel cr);
        ComplexeRationnel division(ComplexeRationnel cr);
        ComplexeRationnel multiplication(ComplexeRationnel cr);

        void afficher();
};


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
       static ComplexeRationnel additionner(Complexe z ,ComplexeRationnel cr);
};

}