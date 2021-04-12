#include <iostream>
#include <vector>
using namespace std;

class Casillero //Casillero
{
	short q_vars;
	short* Array;

public:
	Casillero(short _q_vars = 3) : q_vars(_q_vars) //Constructor Casillero
	{
		Array = new short[q_vars];
		for (short i = 0; i < q_vars; ++i)
		{
			Array[i] = 0;
		}
	}

	void setArray(vector<int> numeros) {
		for (short i = 0; i < numeros.size(); ++i)
			Array[i] = numeros.at(i);
	}

	short* getArray() { return Array; }

};

class Matriz //Matriz
{
private:
	Casillero** mat;
	int filas;
	int columnas;

	Matriz() {}
public:
	Matriz(int _filas, int _columnas) //Constructor Matriz
    {
		filas = _filas;
		columnas = _columnas;

		mat = new Casillero * [filas];

		for (int i = 0; i < filas; i++) {

			mat[i] = new Casillero[columnas];
		}
	}

	int asign_v(int min, int max) { return min + rand() % (max - min + 1); }

	vector<int> crear_Valores() {
        vector<int> numeros;
		for (int i = 0; i < 3; i++)
			numeros.push_back(asign_v(1, 6));
            
        return numeros;
	}

	void mat_setArray() {
		for (int i = 0; i < filas; i++)
			for (int j = 0; j < columnas; j++) 
				mat[i][j].setArray(crear_Valores());
	}

	void print() {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				cout << mat[i][j].getArray()[0] << " " << mat[i][j].getArray()[1] << " " << mat[i][j].getArray()[2]<< " ";
			}
			cout << endl;
		}
	}

};
