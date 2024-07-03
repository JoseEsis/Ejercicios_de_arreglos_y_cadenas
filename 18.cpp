#include<iostream>
#include<string>
using namespace std;

bool CorrectoBalanceo(const string& frase) 
{
    int pila=0;
    for (int i=0; i<frase.length(); i++) 
	{
        if (frase[i] == '(') {
            pila++;
        }
		else if (frase[i] == ')') 
		{
            if (pila == 0) 
			{
                return false; 
            }
            pila--;
        }
    }
    return pila==0; 
}

int main() 
{
    string fraseConParentesis;
    cout << "Ingrese una frase con parentesis: ";
    getline(cin, fraseConParentesis);
	
	cout<<endl;
    if (CorrectoBalanceo(fraseConParentesis)) 
	{
        cout<<"El balanceo de los parentesis es correcto."<<endl;
    } else 
	{
        cout<<"El balanceo de los parentesis no es el correcto."<<endl;
    }

    return 0;
}