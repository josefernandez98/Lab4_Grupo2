#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

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
    int opcion = 0;

    do {
        cout << "---Menu Rubiks Grupo 2---" << endl;
        cout << "1. Iniciar." << endl;
        cout << "2. Scramble." << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion:" << endl;
        cin >> opcion;
        if (opcion == 1) {
            string opcion2 = "";
            do {
                cout << "Ingrese su movimiento (Salir: 0):" << endl;
                cin >> opcion2;
                if (opcion2 == "F") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    F(frontal, arriba, izquierda, derecha, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "f") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    f(frontal, arriba, izquierda, derecha, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "X") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    X(atras, arriba, izquierda, derecha, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "x") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    x(atras, arriba, izquierda, derecha, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "U") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    U(arriba, atras, izquierda, derecha, frontal);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "u") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    u(arriba, atras, izquierda, derecha, frontal);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "B") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    B(abajo, atras, izquierda, derecha, frontal);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "b") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    b(abajo, atras, izquierda, derecha, frontal);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "R") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    R(derecha, arriba, frontal, atras, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "r") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    r(derecha, arriba, frontal, atras, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "L") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    L(izquierda, arriba, atras, frontal, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
                if (opcion2 == "l") {
                    cout << "Antes del movimiento." << endl;
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                    cout << "Despues del movimiento." << endl;
                    l(izquierda, arriba, atras, frontal, abajo);
                    cout << "Frontal" << endl;
                    imprimirMatriz(frontal);
                    cout << "Arriba" << endl;
                    imprimirMatriz(arriba);
                    cout << "Abajo" << endl;
                    imprimirMatriz(abajo);
                    cout << "Izquierda" << endl;
                    imprimirMatriz(izquierda);
                    cout << "Derecha" << endl;
                    imprimirMatriz(derecha);
                    cout << "Atras" << endl;
                    imprimirMatriz(atras);
                }
            } while (opcion2 != "0");
        }
        if (opcion == 2) {
            int aletorio = 0;
            srand (time(NULL));
            for (int i = 0; i < 16; i++) {
                aletorio = rand() % 12;
                cout << aletorio << endl;
                if (aletorio == 0) {
                    F(frontal, arriba, izquierda, derecha, abajo);
                }
                if (aletorio == 1) {
                    f(frontal, arriba, izquierda, derecha, abajo);
                }
                if (aletorio == 2) {
                    X(atras, arriba, izquierda, derecha, abajo);
                }
                if (aletorio == 3) {
                    x(atras, arriba, izquierda, derecha, abajo);
                }
                if (aletorio == 4) {
                    U(arriba, atras, izquierda, derecha, frontal);
                }
                if (aletorio == 5) {
                    u(arriba, atras, izquierda, derecha, frontal);
                }
                if (aletorio == 6) {
                    B(abajo, atras, izquierda, derecha, frontal);
                }
                if (aletorio == 7) {
                    b(abajo, atras, izquierda, derecha, frontal);
                }
                if (aletorio == 8) {
                    R(derecha, arriba, frontal, atras, abajo);
                }
                if (aletorio == 9) {
                    r(derecha, arriba, frontal, atras, abajo);
                }
                if (aletorio == 10) {
                    L(izquierda, arriba, atras, frontal, abajo);
                }
                if (aletorio == 11) {
                    l(izquierda, arriba, atras, frontal, abajo);
                }
            }
            cout << "Despues del Scramble." << endl;
            cout << "Frontal" << endl;
            imprimirMatriz(frontal);
            cout << "Arriba" << endl;
            imprimirMatriz(arriba);
            cout << "Abajo" << endl;
            imprimirMatriz(abajo);
            cout << "Izquierda" << endl;
            imprimirMatriz(izquierda);
            cout << "Derecha" << endl;
            imprimirMatriz(derecha);
            cout << "Atras" << endl;
            imprimirMatriz(atras);
        }
        if (opcion == 3) {
            cout << "Juego terminado." << endl;
        }
    } while (opcion != 3);


    limpiarMemoria(abajo);
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
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void f(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
            }
        }
    }//FOR

}

void X(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void x(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
            }
        }
    }//FOR

}

void U(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void u(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
            }
        }
    }//FOR

}

void B(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void b(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
            }
        }
    }//FOR
}

void R(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void r(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
            }
        }
    }//FOR

}

void L(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
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

void l(int** frente, int** arriba, int** izquierda, int** derecha, int** abajo) {
    //Principal
    int fila1[3];
    int fila2[3];
    int fila3[3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0) {
                fila1[j] = frente[0][j];
            }
            if (i == 1) {
                fila2[j] = frente[1][j];
            }
            if (i == 2){
                fila3[j] = frente[2][j];
            }
        }
    }//FOR
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                frente[i][j] = fila1[j];
            }
            if (j == 1) {
                frente[i][j] = fila2[j];
            }
            if (j == 2) {
                frente[i][j] = fila3[j];
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
                arriba[i][j] = primeraColumnaDerecha[i];
            }
            if (j == 0){
                derecha[i][j] = primeraFilaInferior[j];
            }
            if (i == 0) {
                abajo[i][j] = terceraColumnaIzquierda[i];
            }
            if (j == 2) {
                izquierda[i][j] = terceraFilaArriba[j];
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
