//05*02*25

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
