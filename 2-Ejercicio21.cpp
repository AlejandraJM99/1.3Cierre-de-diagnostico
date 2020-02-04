#include<iostream>
#include<math.h>
using namespace std;

int main()
{	
	//ecuación a)6x^2+11x+3
	float x1,x2;
	int a,b,c;
	a=6;
	b=11;
	c=3;
	
	x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	x2=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	cout<<"Resultados de la ecuacion a) "<<endl;
	cout<<"X1= "<<x1<<endl;
	cout<<"X2= "<<x2;
	
	cout<<"\n\n";
	
	//ecuación b)5x^2+31x+6
	float x3,x4;
	int a1,b1,c1;
	a1=5;
	b1=31;
	c1=6;
	x3=(-b1+(sqrt(b1*b1-4*a1*c1)))/(2*a1);
	x4=(-b1+(sqrt(b1*b1-4*a1*c1)))/(2*a1);
	cout<<"Resultados de la ecuacion b) "<<endl;
	cout<<"X1= "<<x3<<endl;
	cout<<"X2= "<<x4;
	
	cout<<"\n\n";

	
	//ecuación c)10x^2+6x-24
	float x5,x6;
	int a2,b2,c2;
	a2=10;
	b2=6;
	c2=-24;
	x5=(-b2+(sqrt(b2*b2-4*a2*c2)))/(2*a2);
	x6=(-b2+(sqrt(b2*b2-4*a2*c2)))/(2*a2);
	cout<<"Resultados de la ecuacion c) "<<endl;
	cout<<"X1= "<<x5<<endl;
	cout<<"X2= "<<x6;
	
	cout<<"\n\n";

	
	//ecuación d)2x^2-41x-336
	float x7,x8;
	int a3,b3,c3;
	a3=2;
	b3=-41;
	c3=-336;
	x7=(-b3+(sqrt(b3*b3-4*a3*c3)))/(2*a3);
	x8=(-b3+(sqrt(b3*b3-4*a3*c3)))/(2*a3);
	cout<<"Resultados de la ecuacion d) "<<endl;
	cout<<"X1= "<<x7<<endl;
	cout<<"X2= "<<x8;
	
}
