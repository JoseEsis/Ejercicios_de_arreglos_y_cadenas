#include<iostream>
using namespace std;

int main()
{
    int n=10;
   		
    int numero[n];
    cout << "Ingrese " << n << " numeros.";
    cout<<endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << " : ";
        cin >> numero[i];
    }
    
    cout << "El arreglo original: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << numero[i] << " ";
    }
    cout << endl;      
   
    bool EsCapicua = true;
    for(int i = 0; i < 5; i++) 
    {
        if(numero[i] != numero[9 - i])
        {
            EsCapicua = false;
            break;
        }
    }
    
    if(EsCapicua)
    {
        cout<<"El numero es capicua." << endl;
    }
    else
    {
        cout<<"El numero no es capicua."<< endl;
    }
    
    return 0;
}

