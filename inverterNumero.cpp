#include <iostream>
using namespace std;

int main()
{
    int n, numReverso = 0, resto;

    cout << "Informe um numero inteiro: ";
    cin >> n;

    while(n != 0)
    {
        resto = n%10;
        numReverso = numReverso*10 + resto;
        n = n / 10;
    }

    cout << "O numero invertido fica: " << numReverso;

    return 0;
}