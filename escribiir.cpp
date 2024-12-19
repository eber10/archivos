#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string producto, codigo;
	int cantidad, cont=0;
	double precio;
	ofstream archivo;
	archivo.open("inventario.txt");
	if(archivo.is_open())
	{
		cout<<"ingresse el codigo de la lista (x para terminar):"; cin>>codigo;
		while(codigo!="x")
		{
			cout<<"producto: "; cin>>producto;
			cout<<"cantidad: "; cin>>cantidad;
			cout<<"precio: "; cin>>precio;
			cont++;
			archivo<<codigo<<"  "<<producto<<"  "<<cantidad<<"  "<<precio<<endl;
			cout<<"ingrese el codigo de la lista (x para terminar): "; cin>>codigo;
		}
		archivo<<"x";
		archivo.close();
	}
	else
	{
		cout<<"lista no encontrada...."<<endl;
	}

	return 0;
}