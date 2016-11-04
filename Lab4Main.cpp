#include <iostream>
#include <string>

using namespace std;
void imprimirMatriz(int**);
void limpiarMemoria(int**);

void F(int**, int**, int**, int**);
void f(int**, int**, int**, int**);

void X(int**, int**, int**, int**);
void x(int**, int**, int**, int**);

void U(int**, int**, int**, int**);
void u(int**, int**, int**, int**);

void B(int**, int**, int**, int**);
void b(int**, int**, int**, int**);

void R(int**, int**, int**, int**);
void r(int**, int**, int**, int**);

void L(int**, int**, int**, int**);
void l(int**, int**, int**, int**);


int main(int argc, char const *argv[]) {

    int** frontal = new int*[3];
    for (int i = 0; i < 3; ++i) {
        frontal[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            frontal[i][j] = 1;
        }
    }

    int** trasera = new int*[3];
    for (int i = 0; i < 3; ++i) {
        trasera[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trasera[i][j] = 2;
        }
    }

    int** superior = new int*[3];
    for (int i = 0; i < 3; ++i) {
        superior[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            superior[i][j] = 3;
        }
    }

    int** inferior = new int*[3];
    for (int i = 0; i < 3; ++i) {
        inferior[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inferior[i][j] = 4;
        }
    }

    int** derecha = new int*[3];
    for (int i = 0; i < 3; ++i) {
        derecha[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            derecha[i][j] = 5;
        }
    }

    int** izquierda = new int*[3];
    for (int i = 0; i < 3; ++i) {
        izquierda[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            izquierda[i][j] = 6;
        }
    }

    imprimirMatriz(frontal);

    limpiarMemoria(frontal);




    return 0;
}//Fin del main

void limpiarMemoria (int** matriz) {
    for (int i = 0; i < 3; ++i) {
        delete[] matriz[i];
        matriz[i] = NULL;
    }
    delete[] matriz;
    cout << "Matriz borrada." << endl;
}


void imprimirMatriz(int** matriz) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
            cout << matriz[i][j];
		}
		cout << endl;
	}
    cout << endl;
}
