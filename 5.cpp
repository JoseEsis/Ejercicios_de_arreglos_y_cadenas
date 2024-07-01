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
	int	ContarElMayor=0, ContarElMenor=0;
	int menor=numeros[0], mayor=numeros[0];
	for(int i=0;i<n;i++)
	{
		if(numeros[i]>mayor)
		{
			mayor=numeros[i];

		}
		else if(numeros[i]==mayor)
		{
			ContarElMayor++;
		}
		
		if(numeros[i]<menor)
		{
			menor=numeros[i];

		}
		else if(numeros[i]==menor)
		{
			ContarElMenor++;
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;

	cout<<"El numero mayor se repite: "<<ContarElMayor<<endl;
	cout<<"El numero menor se repite: "<<ContarElMenor<<endl;

	
}
