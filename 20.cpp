#include<iostream>
#include<string>
using namespace std;

double PromedioMensual(int MesesDelAnio[])
{
	double promedio;
	int suma=0; 
	for(int i=0; i<12;i++)
	{
		suma+=MesesDelAnio[i];
	}
	promedio=(double)suma/12;
	
	return promedio;
}
void porcentajeDeLosMesesDelAnio(int MesesDelAnio[])
{
	double promedioMeses=PromedioMensual(MesesDelAnio);
	int El40porcientoMensual, El75porcientoMensual;
	El40porcientoMensual=promedioMeses*0.4;
	El75porcientoMensual=promedioMeses*0.75;
	
	double porcentajeDemesesVentasMinimas, porcentajeDemesesVentasRegulares, porcentajeDemesesVentasExcelente;
	int ContarmesesVentasMinimas, ContarmesesVentasRegulares, ContarmesesVentasExcelente;
	ContarmesesVentasMinimas=0;
	ContarmesesVentasRegulares=0;
	ContarmesesVentasExcelente=0;	
	
	for(int i=0; i<12;i++)
	{
		if(MesesDelAnio[i]<El40porcientoMensual)
		{
			ContarmesesVentasMinimas++;
		}
		else if(MesesDelAnio[i]<=El40porcientoMensual and MesesDelAnio[i]<=El75porcientoMensual){
			
			ContarmesesVentasRegulares++;
		}
		else if(MesesDelAnio[i]>El75porcientoMensual)
		{
			ContarmesesVentasExcelente++;

		}
	}
	cout<< endl;
	porcentajeDemesesVentasMinimas= (double) ContarmesesVentasMinimas/ 12*100;
   	porcentajeDemesesVentasRegulares= (double) ContarmesesVentasRegulares/12*100;
    porcentajeDemesesVentasExcelente= (double) ContarmesesVentasExcelente /12*100;

    cout<<"Porcentaje de meses con ventas minimas: " << porcentajeDemesesVentasMinimas<<"%" <<endl;
    cout<<"Porcentaje de meses con ventas regulares: " << porcentajeDemesesVentasRegulares<<"%"<< endl;
    cout<<"Porcentaje de meses con ventas excelentes: " << porcentajeDemesesVentasExcelente<<"%"<< endl;
}
void mostrarMesesExcelentes(int MesesDelAnio[])
{
    double promedioMeses = PromedioMensual(MesesDelAnio);
    double El75porcientoMensual = promedioMeses * 0.75;
    
    string nombresMeses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

    cout << "Meses con ventas excelentes:" << endl;
    for(int i = 0; i < 12; i++) {
        if(MesesDelAnio[i] > El75porcientoMensual) {
            cout << nombresMeses[i] << endl;
        }
    }
}

int main()
{
	cout<<"<< Almacen La Milagrosa - Ventas 2020 >>"<<endl;
	
	int MesesDelAnio[12];
	for(int i=0; i<12;i++)
	{
		cout<<"Ingrese el monto del mes "<<i+1<<" : ";
		cin>>MesesDelAnio[i];
	}
	
	cout<<"El valor de la venta mensual promedio es: "<<PromedioMensual(MesesDelAnio)<<endl;
	cout<<"El porcentaje de los meses del anio que cumplieron los niveles de venta: "<<endl;
	porcentajeDeLosMesesDelAnio(MesesDelAnio);
	mostrarMesesExcelentes(MesesDelAnio);

		
	return 0;
}