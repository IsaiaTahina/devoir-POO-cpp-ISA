
// IsaiaTahina 06*02*2025
namespace isa
{

class ComplexeRationnel
{
    public:
        int anum;
        int aden;
        int bnum;
        int bden;

    public:ComplexeRationnel();
        ~ComplexeRationnel();

        ComplexeRationnel addition(ComplexeRationnel cr);
        ComplexeRationnel soustraction(ComplexeRationnel cr);
        ComplexeRationnel division(ComplexeRationnel cr);
        ComplexeRationnel multiplication(ComplexeRationnel cr);

        void afficher();

        int setanum(int n1);
        int setaden(int n1);
        int setbnum(int n1);
        int setbden(int n1);

        int getanum();
        int getaden();
        int getbnum();
        int getbden();
};


class Complexe
{
    private:
        float x;
        float y;

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
    private:
        int num;
        int den;

    public:Rationnel();
        ~Rationnel();

        Rationnel addition(const Rationnel n);
        Rationnel soustraction(const Rationnel n);
        Rationnel division(const Rationnel n);
        Rationnel multiplication(const Rationnel n);

        void afficher();

        int setNum(int n1);
        int setDen(int n1);

        int getNum();
        int getDen();
};


//


}