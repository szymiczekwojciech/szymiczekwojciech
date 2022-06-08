#include <iostream>
using namespace std;
int silnia(int n);
int newton(int n,int k);
int main()
{
    cout << "Dwumian Newtona. Autor: Wojciech Szymiczek" << endl;
    cout<<"Silnia z 5: "<<silnia(5)<<endl;
    cout<<"Silnia z 1: "<<silnia(1)<<endl;
    cout<<"Silnia z 0: "<<silnia(0)<<endl;
    cout<<"Kombinacje 5 po 2: "<<newton(5,2)<<endl;
    cout<<"Kombinacje 5 po 1: "<<newton(5,1)<<endl;
    return 0;
}
int silnia(int n)
{
    int wynik=1;
    for(int i=1;i<=n;i++)
        wynik=wynik*i;
    return wynik;
}
int newton(int n,int k)
{
    return silnia(n)/(silnia(n-k)*silnia(k));
}
