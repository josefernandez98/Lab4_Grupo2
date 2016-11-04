#include <iostream>
#include <string>

using namespace std;
void imprimirMatriz(int**);
void limpiarMemoria(int**);

void F(int**, int**, int**, int**, int**);
void f(int**, int**, int**, int**, int**);

void X(int**, int**, int**, int**, int**);
void x(int**, int**, int**, int**, int**);

void U(int**, int**, int**, int**, int**);
void u(int**, int**, int**, int**, int**);

void B(int**, int**, int**, int**, int**);
void b(int**, int**, int**, int**, int**);

void R(int**, int**, int**, int**, int**);
void r(int**, int**, int**, int**, int**);

void L(int**, int**, int**, int**, int**);
void l(int**, int**, int**, int**, int**);


int main(int argc, char const *argv[]) {
    int** probar = new int*[3];
    for (int i = 0; i < 3; ++i) {
        probar[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                probar[i][j] = 1;
            }
            if (i == 1) {
                probar[i][j] = 2;
            }
            if (i == 2) {
                probar[i][j] = 3;
            }
        }
    }


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

    imprimirMatriz(probar);
    F(probar, frontal, frontal, frontal, frontal);
    imprimirMatriz(probar);
    limpiarMemoria(probar);




    return 0;
}//Fin del main

void F(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fila1[j] = frente[0][j];
            fila2[j] = frente[1][j];
            fila3[j] = frente[2][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila3[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila1[j];
            }
        }
    }

}


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
