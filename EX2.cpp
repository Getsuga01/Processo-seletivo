
#include <iostream>
using namespace std;

int main()
{
    int n, n1 = 0, n2 = 1, n3, i;
    bool pertence = false;

    cout << "Digite um numero: ";
    cin >> n;

    for (i = 2; i < n; ++i)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if (n3 == n)
        {
            pertence = true;
        }
    }

    if (pertence)
    {
        cout << "O numero " << n << " pertence a sequencia de Fibonacci";
    }
    else
    {
        cout << "O numero " << n << " nao pertence a sequencia de Fibonacci";
    }


    return 0;
}
