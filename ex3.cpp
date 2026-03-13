#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[3][3]) {

    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
}

int main() {

    int matrizA[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matrizB[3][3] = {{9,8,7}, {6,5,4}, {3,2,1}};
    int matrizResultado[3][3];

    for(int linha = 0; linha < 3; linha++) {
        for(int coluna = 0; coluna < 3; coluna++) {

            matrizResultado[linha][coluna] =
            matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }

    cout << "Resultado da soma das matrizes:" << endl;

    mostrarMatriz(matrizResultado);

    return 0;
}