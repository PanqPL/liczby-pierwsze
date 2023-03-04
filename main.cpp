#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int liczba, b, pier, testy;

int czy_pierwsza(int licz)
{
    pier=sqrt(licz);
    int i=2;
    b=1;
    while (b!=0&&i<=pier)
    {
        b=licz%i;
        i++;
    }
    return b;



}


int main()
{
    cin >>testy;

    for(int i=1; i<=testy; i++)
    {
        cin>>liczba;

        if (liczba==1)
        {
            cout <<"NIE"<< endl;
        }

        else if(liczba!=1&&czy_pierwsza(liczba)==0)
        {
            cout<<"NIE"<<endl;
        }
        else
        {
            cout<<"TAK"<<endl;
        }

    }

    return 0;
}
