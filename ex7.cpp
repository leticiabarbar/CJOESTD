#include <iostream>
using namespace std;

struct No {
    int valor;
    No* proximo;
};

void inserirNoFinal(No*& lista, int numero) {

    No* novo = new No;
    novo->valor = numero;
    novo->proximo = NULL;

    if(lista == NULL) {
        lista = novo;
    }
    else {
        No* atual = lista;

        while(atual->proximo != NULL) {
            atual = atual->proximo;
        }

        atual->proximo = novo;
    }
}

void mostrarLista(No* lista) {

    int totalNos = 0;

    while(lista != NULL) {
        cout << lista->valor << " -> ";
        lista = lista->proximo;
        totalNos++;
    }

    cout << "NULL" << endl;
    cout << "Total de nos: " << totalNos << endl;
}

int main() {

    No* lista = NULL;

    inserirNoFinal(lista, 10);
    inserirNoFinal(lista, 20);
    inserirNoFinal(lista, 30);
    inserirNoFinal(lista, 40);
    inserirNoFinal(lista, 50);

    mostrarLista(lista);

    return 0; 
}