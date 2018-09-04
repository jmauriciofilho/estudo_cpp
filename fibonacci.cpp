#include <iostream>
using namespace std;

int main()
{
    long n;
    long t1 = 0; 
    long t2 = 1; 
    long nextTerm = 0;

    cout << "Informe o numero de termos: ";
    cin >> n;

    cout << "A serie de Fibonacci é: ";

    for (long i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1 << " ";
            continue;
        }

        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}