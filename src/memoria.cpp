#include <iostream>
using namespace std;

int main (int argc, char const *argv[])
{
    cout<<"Tamaños de tipos de datos"<<endl;
    cout<<"char: "<< sizeof(char)<<endl;
    cout<<"int: "<<sizeof(int)<<endl;
    cout<<"short: "<<sizeof(short)<<endl;
    cout<<"long: "<<sizeof(long)<<endl;
    cout<<"long long: "<<sizeof(long long)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"long double: "<<sizeof(long double)<<endl;
    cout<<"bool: "<<sizeof(bool)<<endl;

	cout << "--------------------------------------"<< endl;
	cout << "direcciones de memoria" << endl;
	int a = 10;
	int b = 20;
	cout << "a: "<< a << "b:" << b << endl;
	cout << "a: "<< &a << "b:" << &b << endl;
	cout << "--------------------------------------"<< endl;
	cout <<"punteros"<< endl;
	cout << "--------------------------------------"<< endl;
	int* p = &a;
	cout << "p: " << p << endl;
	cout << "p: " << *p << endl;
	cout << "p: " << &p << endl;
	cout << "--------------------------------------"<< endl;
	cout <<"Memoria dinamica (como declarar variables en ejecucion)"<< endl;
	cout << "--------------------------------------"<< endl;
	cout <<"Direccion dinamica"<< malloc(4)<< endl;
	cout <<"Direccion dinamica"<< malloc(sizeof(int))<< endl;



	return 0;
}