#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	
	cout<<"Ingrese la cantidad de nombres: ";
	cin>>n;
	string nombre[n], aux;
	for(int i=0; i<n; i++)
	{
		cout<<"El nombre "<<i+1<<" es: ";
		cin>>nombre[i];
	}
	for(int i=0; i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(nombre[i]>nombre[j])
			{
				aux=nombre[i];
				nombre[i]=nombre[j];
				nombre[j]=aux;
			}
			
		}
	}
	cout<<"Los nombres alfabeticamente: ";
	cout<<endl;
	for(int i=0; i<n;i++)
	{
		cout<<i+1<<". "<< nombre[i] <<endl;
	}
	
	return 0;
}
