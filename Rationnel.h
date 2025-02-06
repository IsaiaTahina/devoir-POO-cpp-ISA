//05*02*25

//namespace isa{
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
//}
