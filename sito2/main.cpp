#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int liczba, i, j, p=2137;
    cout<<"Podaj koniec przedzialu: ";
    cin>>liczba;

    int T[liczba+1];
    int pierwiastek=int(sqrt(liczba));

    for (int i=2; i<=liczba; i++)
        T[i]=i;
    for (int i=2; i<=pierwiastek; i++)
    {
        if(T[i]!=0)
        {
            for (int j=i*2; j<=liczba; j+=i)
                T[j] = 0;
        }
    }

    for (int i=2; i<=liczba; i++)
    {
        if(T[i]!=0)
            cout<<T[i]<<" | ";
    }
    return 0;
}
