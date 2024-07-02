#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Ingrese la cantidad de nombres y apellidos a ingresar: ";
	cin>>n;
	string nombresYapellidos[n];
	cout<<"Ingresar "<<n<<" palabras."<<endl;
	for(int i=0;i<n;i++) 
	{
		cin>>nombresYapellidos[i];
	}

	string apellido;
	cout<<"Escriba el apellido para hacer la verificacion: "<<endl;
	cin>>apellido;
	
	cout<<endl;
	
	bool Coincide=false;
	for(int i=0;i<n;i++) 
	{
		string nombreCompleto= nombresYapellidos[i];
		if(nombresYapellidos[i]==apellido)
		{
			Coincide=true;
			break;
		}
			
	}
	if(Coincide)
	{
		cout<<"El apellido ingresado si pertenece a la persona. "<<endl;
	}
	else
	{
		cout<<"El apellido ingresado no pertenece a la persona. "<<endl;
	}
	
	
	cout<<endl;
		
	
	
	return 0;
}