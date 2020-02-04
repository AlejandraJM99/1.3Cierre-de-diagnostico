#include<iostream>
using namespace std;

int main()
{
	int llegada, salida, pago,a;
	double result;
	
	cout<<"Se considera un formato de 24 horas."<<endl;
	
	cout<<"Ingresa la hora de llegada: ";
	cin>>llegada;
	cout<<"Ingresa la hora de salida: ";
	cin>>salida;
	
	if(salida >= 22)
	{
		a = salida - 22;
	}
	pago = salida - llegada;
	result =(pago * 0.75) + (a*0.25);
	cout<<"pago: "<<result;
}
