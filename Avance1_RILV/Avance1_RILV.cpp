#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int i, val = 0;
	float presio;
	char vid[40], descripcion[100], resena[100], genero[40], clasificacion[40], consola[40];
	cout << "\t***TIENDA DE VIDEOJUEGOS***\n";
	cout << "Digite la opcion que desee\n";
	cout << "1. Alta de videojuegos.\n"
		 << "2. Modificacion de videojuegos.\n"
		 << "3. Baja de videojuegos.\n"
		 << "4. Lista de videojuegos.\n"
		 << "5. Limpiar pantalla.\n"
		 << "6. Salir\n";
	cin >> i;

	if (i > 6 || i < 1) {
		cout << "Su numero no es valido";
		return main();
	}
	switch (i) {
	case 1:
		cin.ignore();
		cout << "Ingrese el nombre del videojuego: "; cin.getline(vid, 40, '\n');
		cout << "Ingrese la descripcion del videojuego: "; cin.getline(descripcion, 100, '\n');
		cout << "Ingrese la resena del videojuego: "; cin.getline(resena, 100, '\n');
		cout << "Ingrese el genero del videojuego: "; cin.getline(genero, 40, '\n');
		cout << "Ingrese la clasificasion del videojuego: "; cin.getline(clasificacion, 40, '\n');
		cout << "Ingrese la consola del videojuego: "; cin.getline(consola, 40, '\n');
		cout << "Digite el precio del videojuego: "; cin >> presio;
		cout << "Desea agregar otro articulo?\n1. SI\n2. NO\n"; cin >> val;
		if (val == 1) {
			return main();
		}
		else {
			return main();
		}

		return main();
		break;
	case 2: cout << "Opcion no disponible";
		break;
	case 3: cout << "Opcion no disponible";
		break;
	case 4: cout<< "Opcion no disponible";
		break;
	case 5: system("cls");
		return main();
		break;
	case 6: exit(1);
		break;
	}
	return 0;
}