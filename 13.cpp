#include<iostream>
using namespace std;

char *mistrcpy(char str1[], char str2[])
{
	int n=0;
	while(str2[n] != '\0')
	{
		str1[n]=str2[n];
		n++;
	}
	str1[n]='\0';
	return str1;
	
}

int main()
{
	int n;
	cout<<"Ingresar la cantidad de datos a ingresar: ";
	cin>>n;
	char str2[100];
	char str1[100];
	for(int i=0;i<n;i++)
	{
		cout<<"Ingrese el  caracter "<<i+1<<" : ";
		cin>>str2[i];
	}
	cout<<"La copia de str2 a str1 es: "<<mistrcpy(str1,str2);
	
	
	return 0; 
}