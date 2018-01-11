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

void hanoi (int n, char a, char b, char c)
{
    if (n>0)
    {
        hanoi (n-1, a, c, b);
        cout<<a<<" na "<<b<<endl;
        hanoi (n-1, c, b, a);
    }
}

int main()
{
    cout<<"Potega: "<<potega(2,4)<<endl;
    cout<<"Fibonaczi: "<<fib(6)<<endl;
    hanoi(6, 'A', 'B', 'C');
    return 0;
}
