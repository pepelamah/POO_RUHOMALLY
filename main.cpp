//#include "Carre.h
#include <iostream>
using namespace std;
class Carre
{
public:
int perimetre (int cote3);
int surface (int cote2);
int saisie (int cote1);

private :
int cote;
};

int Carre ::saisie (int cote1)
{
cout << "Entrez la valeur du cote en m:" ;
cin >> cote ;
}
int Carre ::perimetre (int cote2)
{
return 4*cote ;
}
int Carre ::surface (int cote3)
{
return (cote*cote);
}


int main()
{
int c;
Carre carre1;
cout << "********Calcul propriétes d'un' carre*********" << endl;
cout<< carre1.saisie(c)<<" m" <<endl;
cout << "Périmetre du carre : ";
cout << carre1.perimetre(c)<<" m" <<endl;
cout << "Surface du carre : ";
cout << carre1.surface(c)<<" m2" <<endl;
return 0;
}
