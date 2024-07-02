#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

double CalcularMedia(int numero[])
{
	int suma=0;
	double media;
	for(int i=0;i<30;i++)
	{
		suma+=numero[i];
	}
	media=(double)suma/30;
	return media;
}
double CalcularMediana(int numero[])
{

	double mediana;
	mediana=(numero[14]+numero[15])/2.;
	return mediana;
	
}
int CalcularModa(int numero[])
{
    int moda=0;
    int maximaFrecuencia=0;
    
    for(int i=0; i<30 ; i++)
    {
        int frecuencia = 0;
        for(int j=0; j<30 ;j++)
        {
            if(numero[i] == numero[j])
            {
                frecuencia++;
                
                
            }
            else if(numero[i]==numero[0])
            {
            	moda=numero[i];
            	
			}
        }
        if(frecuencia > maximaFrecuencia)
        {
            maximaFrecuencia = frecuencia;
            moda=numero[i];
        }
		
    }
    if(maximaFrecuencia > 1)
    {
        return moda;
    }
    else
    {
        return 0;
    }
    

}

int main()
{
	srand(time(0));
	int numero[30];
	
	for(int i=0; i<30;i++)
	{
		numero[i]=rand()%901+100;
	}
	int aux;
	for(int i=0; i<30-1;i++)
	{
		for(int j=i+1;j<30;j++)
		{
			if(numero[i]>numero[j])
			{
				aux=numero[i];
				numero[i]=numero[j];
				numero[j]=aux;
			}			
		}
	}
	
	for(int i=0; i<30;i++)
	{
		cout<<i+1<<". "<<numero[i]<<endl;
	}
	cout<<endl;
	cout<<"La media de los 30 numeros generados es: "<<CalcularMedia(numero)<<endl;
	cout<<"La mediana de los 30 numeros generados es(para combrobar sumar posicion 15 y 16): "<<CalcularMediana(numero)<<endl;
	
	int moda = CalcularModa(numero);
	if(moda != 0)
	{
		cout << "La moda de los 30 numeros generados es: " << moda << endl;
	}
	else
	{
		cout << "No hay moda en el arreglo." << endl;
	}
	
	
	
	
	
	return 0;
}