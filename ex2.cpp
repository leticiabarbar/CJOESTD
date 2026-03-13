#include <iostream>
using namespace std;

void inverterVetor(int vetor[], int tamanhoVetor) {

    int inicio = 0;
    int fim = tamanhoVetor - 1;

    while(inicio < fim) {

        int auxiliar = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = auxiliar;

        inicio++;
        fim--;
    }
}

void mostrarVetor(int vetor[], int tamanhoVetor) {

    for(int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;
}

int main() {

    int numeros[] = {1, 2, 3, 4, 5};
    int quantidade = 5;

    cout << "Vetor antes de inverter: ";
    mostrarVetor(numeros, quantidade);

    inverterVetor(numeros, quantidade);

    cout << "Vetor depois de inverter: ";
    mostrarVetor(numeros, quantidade);

    return 0;
}