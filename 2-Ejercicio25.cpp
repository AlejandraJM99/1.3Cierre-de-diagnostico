#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;


int main()
{
	int tam[12];
	int n; //numero a buscar
	int encontrado =0;
	
	//Generador de numeros aleatorios
	srand(time(0));
	for(int i=0;i<12;i++)
	{
		tam[i] = 1 + rand() % 1500;
	}
	for(int i=0;i<12;i++)
	{
		cout<<"\n"<<tam[i];
	}
	
	cout<<"\nIngresa tu numero: ";
	cin>>n;
	for(int i =0;i<12;i++)
	{
		if(n==tam[i])
		{
			encontrado = 1;
			cout<<"Numero premiado!!"<<endl;
			break;
		}
		else
		{
			encontrado = 0;
		}
	}
	if(encontrado == 0)
	{
		cout<<"Numero perdedor!";
	}
}
