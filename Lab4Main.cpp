#include <iostream>
#include <string>

using namespace std;
//int** llenarMatriz(int**, int*, int);
void imprimirMatriz(int, int**, int);

int main(int argc, char const *argv[]) {

    int** frontal = new int*[3];
    for (int i = 0; i < 3; ++i) {
        frontal[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            frontal[i][j] = 1;
        }
    }

    int** trasera = new int*[3];
    for (int i = 0; i < 3; ++i) {
        trasera[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            trasera[i][j] = 2;
        }
    }


    int** superior = new int*[3];
    for (int i = 0; i < 3; ++i) {
        superior[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            superior[i][j] = 3;
        }
    }


    int** inferior = new int*[3];
    for (int i = 0; i < 3; ++i) {
        inferior[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            inferior[i][j] = 4;
        }
    }


    int** derecha = new int*[3];
    for (int i = 0; i < 3; ++i) {
        derecha[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            derecha[i][j] = 5;
        }
    }


    int** izquierda = new int*[3];
    for (int i = 0; i < 3; ++i) {
        izquierda[i] = new int[3];
    }//Fin del for
    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 3; j++) {
            izquierda[i][j] = 6;
        }
    }




    return 0;
}//Fin del main


void imprimirMatriz(int x, int** matriz) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {

		}
		cout << endl;
	}
}
