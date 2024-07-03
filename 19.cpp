#include <iostream>
#include <string>
using namespace std;

bool esLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool esPalindromo(const string& frase)
{
    int inicio = 0;
    int fin = frase.length() - 1;

    while (inicio < fin) {
        while (!esLetra(frase[inicio])) 
		{
            inicio++;
        }
        while (!esLetra(frase[fin]))
		{
            fin--;
        }

        if (toLower(frase[inicio]) != toLower(frase[fin])) 
		{
            return false;
        }

        inicio++;
        fin--;
    }

    return true;
}

int main() 
{
	string frase;
	cout << "Ingrese una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) 
	{
        cout << "La frase es un palindromo." <<endl;
    } else {
       cout << "La frase no es un palindromo." <<endl;
    }

    return 0;
}