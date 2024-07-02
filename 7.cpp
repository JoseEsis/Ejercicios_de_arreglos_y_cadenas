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
	cout<<"El arreglo original: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	cout<<"El arreglo invertido: "<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<numeros[i]<<" ";
		
	}
	return 0;
}
