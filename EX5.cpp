#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palavra;
    cout << "Digite uma string sem espaco: ";
    cin >> palavra;

    int i, j;
    char aux;

    for (i = 0, j = palavra.length() - 1; i < j; i++, j--)
    {
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }

    cout << "invertida: " << palavra;

    return 0;
}
