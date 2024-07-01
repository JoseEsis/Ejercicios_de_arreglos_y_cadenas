#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>n;
	int numeros[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el numero "<<i+1<<" : ";
		cin>>numeros[i];
	}
	int	sumaNumeroPar=0, sumaNumeroImpar=0;
	for(int i=0;i<n;i++)
	{
		if(numeros[i]%2==0)
		{
			sumaNumeroPar=sumaNumeroPar+numeros[i];
		}
		else 
		{
			sumaNumeroImpar=sumaNumeroImpar+numeros[i];
		}
			
	}
	cout<<"La suma de los numeros pares es: "<<sumaNumeroPar<<endl;
	cout<<"La suma de los numeros impares es: "<<sumaNumeroImpar<<endl;
	
}
