#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	cout<<"Ingrese la cantidad de palabras que desea ingresar: ";
	cin>>n;
	string M[n];
	for(int i=0;i<n;i++) 
	{
		cout<<"Ingrese la palabra "<<i+1<<" : ";
		cin>>M[i];
	}

	cout<<"La palabra ingresada es: "<<endl;
	for(int i=0;i<n;i++)
	{
		
		cout<<M[i]<<" ";			
	}
	cout<<endl;
	cout<<"La primera letra de cada palabra en mayuscula: ";
	for(int i=0;i<n;i++)
	{
		if(M[i]>=M[0])
		{
			M[i][0]=toupper(M[i][0]);
		}
		cout<<M[i]<<" ";
		
	}	
	
	return 0;
}
