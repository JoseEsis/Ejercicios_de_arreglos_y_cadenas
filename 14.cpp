#include<iostream>
using namespace std;

char* mistrcat(char str1[], char str2[])
{
	int longitud1=0;
	while(str1[longitud1] != '\0')
	{
		longitud1++;
	}
	
	int longitud2=0;
	while(str2[longitud2] != '\0')
	{
		str1[longitud1+longitud2]=str2[longitud2];
		longitud2++;
	}
	
	return str1;
	
	
}

int main()
{
	
	char str1[]="Hola";
	char str2[]="Jose";	

	cout<<"Resultado de str2 al final de str1: "<<mistrcat(str1,str2);
	
	
	return 0; 
}