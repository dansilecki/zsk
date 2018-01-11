#include <iostream>

using namespace std;


int potega (int p, int w)
{
    if(w==0) return 1;
    else return p*potega(p, w-1);
}

int fib (int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

void hanoi2 (int n, char a, char b, char c)
{
    if (n>0)
    {
        hanoi2 (n-1, a, c, b);
        cout<<a<<" na "<<b<<endl;
        hanoi2 (n-1, c, b, a);
    }
}

int silnia (int n)
{
    if(n==0) return 1;
    else return silnia(n-1)*n;
}

int main()
{
    cout<<"Potega: "<<potega(2,4)<<endl;
    cout<<"Fibonaczi: "<<fib(6)<<endl;
    cout<<"Silnia: "<<silnia(3)<<endl;
    hanoi2(3, 'A', 'B', 'C');
    return 0;
}
