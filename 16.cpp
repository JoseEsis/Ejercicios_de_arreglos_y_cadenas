#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string entrada;
    cout << "Ingrese una linea de entrada: ";
    getline(cin, entrada);

    string digitos;
    for (int i=0; i<entrada.length(); i++)
	{
        if (isdigit(entrada[i]))
		{
            digitos+=entrada[i];
        }
    }

    int n = 0;
    for (int i=0; i<digitos.length();i++) 
	{
        n=n*10+(digitos[i]-'0');
    }
    n += 2;

    cout << "El resultado es: "<<n<<endl;

    return 0;
}