#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Ingrese la cantidad de palabras a ingresar: ";
	cin>>n;
	string palabra[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"La palabra "<<i+1<<" es: ";
		cin>>palabra[i];
	}
	cout<<endl;
	cout<<"Eco de las palabras: "<<endl;
	for(int i = 0; i < n ;i++)
	{
		cout<<palabra[i]<<endl;
	}
	return 0;
	
}
