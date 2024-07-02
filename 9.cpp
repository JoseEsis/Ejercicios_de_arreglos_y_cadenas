#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Ingresar la cantidad de numeros a digitar: ";
	cin>>n;
	int numero[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Ingrese el numero "<<i+1<<" : ";
		cin>>numero[i];
	}
	
	int ultimoElemento=numero[n-1];	
	for(int i=n-1;i>0;i--)
	{

		numero[i]=numero[i-1];
	
	}
	
	numero[0]=ultimoElemento;
	
	cout<<"Rotar una posicion hacia la derecha."<<endl;
	for(int i=0;i<n;i++)
	{

		cout<<numero[i]<<" ";
	
	}
	return 0;
}