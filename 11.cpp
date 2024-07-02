#include<iostream>
using namespace std;


int SumaPositivos(int numero[], int n)
{
	int sumPositivos=0;
	for(int i=0;i<n;i++)
	{
		if(numero[i]>=0)
		{
			sumPositivos+=numero[i];
		
		}
	} 
	return sumPositivos;

}
int SumaNegativos(int numero[], int n)
{
	int sumNegativos=0;
	for(int i=0;i<n;i++)
	{
		if(numero[i]<0)
		{
			sumNegativos+=numero[i];
		
		}
	} 
	return sumNegativos;
	
}

int main()
{
	int n;
	cout<<"Ingrese la cantidad de numeros a ingresar: ";
	cin>>n;
	int numero[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el numero "<<i+1<<" : ";
		cin>>numero[i];
	} 
	
	cout<<"La suma de los numeros positivos es: "<<SumaPositivos(numero, n)<<endl;
	cout<<"La suma de los numeros negativos es: "<<SumaNegativos(numero, n)<<endl;

	return 0;
}