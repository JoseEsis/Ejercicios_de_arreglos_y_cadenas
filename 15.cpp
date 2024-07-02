#include<iostream>
using namespace std; 

int mistrcmp( char str1[], char str2[])
{
	int n=0;
	while(str1[n]!='\0' and str2[n]!='\0')
	{	
		n++;
	}
	if(str1[n]=='\0' and str2[n]=='\0')
	{
		return 0;
	}
	else if(str1[n]>str2[n])
	{
		return 1;
	}else 
	{
		return -1;
	}
}


int main()
{
	char str1[]={"hola"};
	char str2[]={"hola"};
	
	cout<<"La comparacion de los dos arreglos es: "<<mistrcmp(str1, str2);
	
	
	return 0; 
}