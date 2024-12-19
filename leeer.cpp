#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string producto, ruc;
	int cantidad, cont=0;
	double precio;
	ifstream archivo;
	archivo.open("lista.txt");
	if(archivo.is_open())
	{
		archivo>>ruc;
		while(ruc!="x")
		{
			archivo>>producto>>cantidad>>precio;
			cont++;
			cout<<"lista: "<<cont<<endl;
			cout<<"producto: "<<producto<<endl;
			cout<<"cantidad: "<<cantidad<<endl;
			cout<<"precio: "<<precio<<endl;
			archivo>>ruc;
		}
		archivo.close();
	}
	else
	{
		cout<<"lista no encontrado.........."<<endl;
	}
	return 0;
	
}