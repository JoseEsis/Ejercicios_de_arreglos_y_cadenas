#include <iostream>
using namespace std;

int main() 
{
   	
	int n;
	int contador=0;
	
	cout<<"Ingrese la cantidad de letras que desea ingresar: ";
	cin>>n;	
	char UnaLetra[n];
	char letra;
	cout<<"\nNota: Ingresa solo una letra."<<endl;
	for(int i=0;i<n;i++) 
	{
		cout<<"La letra "<<i+1<<" es: ";
		cin>>UnaLetra[i];
	}

	cout<<"\nLa palabra ingresada es: "<<endl;
	for(int i=0;i<n;i++)
	{
		
		cout<<UnaLetra[i];			
	}
	cout<<endl;
	cout<<"\nIngrese la letra a buscar en el arreglo: ";
	cin>>letra;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		if(UnaLetra[i]==letra)
		{
			contador++;
		}
	}
	cout<<"La letra "<<letra<<" se repite: "<<contador;
    return 0;
}

