#include<iostream>
using namespace std;

bool EstaOrdenado(int vector2[], int vector1[], int longitud)
{
	for(int i=0; i<longitud; i++)
	{
		for(int j=0; j<longitud; j++)
		{
			if(vector1[i]!=vector2[j])
			{	
				return false;

			}
			else
			{
				return true;
			}
		}
	}
	
}
int main()
{
	int longitud;
	cout<<"Ingrese la cantidad de numeros a ingresar: ";
	cin>>longitud;
	int vector1[longitud];
	int vector2[longitud];
	
	cout<<"Ingresando valores del primer vector. "<<endl;
	for(int i=0;i<longitud;i++)
	{
		cout<<"Ingrese el numero "<<i+1<<" : ";
		cin>>vector1[i];
	} 
	
	cout<<"Ingresando valores del segundo vector. "<<endl;
	for(int j=0;j<longitud;j++)
	{
		cout<<"Ingrese el numero "<<j+1<<" : ";
		cin>>vector2[j];
	} 
	cout<<endl;
		
	if(EstaOrdenado(vector1, vector2,longitud))
	{
		cout<<"Esta ordenado"<<endl;
		
	}
	else
	{
		cout<<"No esta ordenado"<<endl;
	}
}

