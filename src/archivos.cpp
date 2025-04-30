#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Persona
{
	char nombre [12];
	int edad;
};

int main(int argc, char const *argv[])
{
	ofstream archivoSalida("archivo.txt");
	if (!archivoSalida)
	{
		cerr << "Error al leer archivo" << endl;
		return 1; // finalizar error
	}
	cout << "Escribiendo archivo" << endl;
	archivoSalida << "Hola mundo este es mi primer archivo" << endl;

	archivoSalida.close();

	ifstream archivoEntrada("archivo.txt");
	if (!archivoEntrada)
	{
		cerr << "Error al leer archivo" << endl;
		return 1; // finalizar error
	}
	cout << "Leyendo archivo" << endl;
	string linea;
	while (getline(archivoEntrada, linea))
	{
		cout << linea << endl;
	}
	archivoEntrada.close();

	//------------------------------------------------------------------------------------
	// Escritura de archivos Binarios
	ofstream archivoSalidaBinario("archivo.bin",ios::binary);
	if (!archivoSalidaBinario)
	{
		cerr << "Error al leer archivo" << endl;
		return 1; // finalizar error
	}

	Persona p1 = {"Juan", 20};
	Persona p2 = {"Pedro", 30};
	Persona p3 = {"Maria", 40};

	archivoSalidaBinario.write((char*)(&p1),sizeof(Persona));
	archivoSalidaBinario.write((char*)(&p2),sizeof(Persona));
	archivoSalidaBinario.write((char*)(&p3),sizeof(Persona));

	archivoSalidaBinario.close();
	return 0;
}