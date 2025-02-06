//05*02*25


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
