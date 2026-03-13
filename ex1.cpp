#include <iostream>
using namespace std;

int main() {

    int notas[] = {7, 9, 5, 8, 6, 10, 4};
    int quantidadeNotas = 7;

    int somaNotas = 0;
    int maiorNota = notas[0];
    int menorNota = notas[0];

    for(int i = 0; i < quantidadeNotas; i++) {

        somaNotas = somaNotas + notas[i];

        if(notas[i] > maiorNota) {
            maiorNota = notas[i];
        }

        if(notas[i] < menorNota) {
            menorNota = notas[i];
        }
    }

    float media = somaNotas / (float)quantidadeNotas;

    cout << "Media das notas: " << media << endl;
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Menor nota: " << menorNota << endl;
    return 0;
}