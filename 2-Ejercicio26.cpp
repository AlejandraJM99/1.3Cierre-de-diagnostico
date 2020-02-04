#include<iostream>
using namespace std;

int main()
{
	int miguel,laura,esteban;
	int total;
	int c_esteban;
	
	cout<<"Que cantidad tiene Miguel? ";
	cin>>miguel;
	cout<<"Que cantidad tiene Laura? ";
	cin>>laura;
	
	esteban = (miguel * 3) + (laura + 4);
	
	cout<<"\nHistorietas de Esteban: "<<esteban<<endl;
	cout<<"Historietas de Miguel: "<<miguel<<endl;
	cout<<"Historietas de Laura: "<<laura<<endl;
	
	total = miguel + laura + esteban;
	
	cout<<"\nEl numero de historietas entre los tres es de: "<<total<<endl;
	if(total < 200)
	{
		cout<<"Es una combinacion posible";
	}else
	{
		cout<<"No es una combinacion posible";
	}
	
}

