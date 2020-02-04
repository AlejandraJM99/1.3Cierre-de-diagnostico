#include<iostream>
using namespace std;

int main()
{
	int triunfo;
	int derrota;
	int total;
	int ganancia;
	
	cout<<"Ingresa el numero de triunfos: ";
	cin>>triunfo;
	cout<<"Ingresa el numero de derrotas: ";
	cin>>derrota;
	
	total=triunfo + derrota;
	cout<<"numero de juegos: "<<total<<endl;
	
	ganancia=((triunfo*100)/(total));
	cout<<"el total de ganancias es: "<<ganancia;
	
}
