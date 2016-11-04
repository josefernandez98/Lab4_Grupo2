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

    int** frontal = new int*[3];
    for (int i = 0; i < 3; ++i) {
        frontal[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            frontal[i][j] = 1;
        }
    }

    int** atras = new int*[3];
    for (int i = 0; i < 3; ++i) {
        atras[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            atras[i][j] = 2;
        }
    }

    int** arriba = new int*[3];
    for (int i = 0; i < 3; ++i) {
        arriba[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arriba[i][j] = 3;
        }
    }

    int** abajo = new int*[3];
    for (int i = 0; i < 3; ++i) {
        abajo[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            abajo[i][j] = 4;
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

    cout << "Frontal" << endl;
    imprimirMatriz(frontal);
    cout << "Arriba" << endl;
    imprimirMatriz(arriba);
    cout << "Izquierda" << endl;
    imprimirMatriz(izquierda);
    cout << "Derecha" << endl;
    imprimirMatriz(derecha);
    cout << "Abajo" << endl;
    imprimirMatriz(abajo);
    cout << endl;
    F(frontal, arriba, izquierda, derecha, abajo);
    cout << "Frontal" << endl;
    imprimirMatriz(frontal);
    cout << "Arriba" << endl;
    imprimirMatriz(arriba);
    cout << "Izquierda" << endl;
    imprimirMatriz(izquierda);
    cout << "Derecha" << endl;
    imprimirMatriz(derecha);
    cout << "Abajo" << endl;
    imprimirMatriz(abajo);
    limpiarMemoria(frontal);
    limpiarMemoria(arriba);
    limpiarMemoria(izquierda);
    limpiarMemoria(derecha);
    limpiarMemoria(atras);




    return 0;
}//Fin del main

void F(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fila1[j] = frente[0][j];
            fila2[j] = frente[1][j];
            fila3[j] = frente[2][j];
        }
    }//FOR
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
    }//FOR
    int terceraFilaArriba[3];
    int primeraColumnaDerecha[3];
    int primeraFilaInferior[3];
    int terceraColumnaIzquierda[3];
    //arriba
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2) {
                terceraFilaArriba[j] = arriba[i][j];
            }
            if (j == 0){
                primeraColumnaDerecha[i] = derecha[i][j];
            }
            if (i == 0) {
                primeraFilaInferior[j] = abajo[i][j];
            }
            if (j == 2) {
                terceraColumnaIzquierda[i] = izquierda[i][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2) {
                arriba[i][j] = terceraColumnaIzquierda[j];
            }
            if (j == 0){
                derecha[i][j] = terceraFilaArriba[i];
            }
            if (i == 0) {
                abajo[i][j] = primeraColumnaDerecha[j];
            }
            if (j == 2) {
                izquierda[i][j] = primeraFilaInferior[i];
            }
        }
    }//FOR

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
