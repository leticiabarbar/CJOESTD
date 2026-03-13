#include <iostream>
using namespace std;

struct No {
    int valor;
    No* prox;
};

void inserirFinal(No*& lista, int num) {

    No* novo = new No;
    novo->valor = num;
    novo->prox = NULL;

    if(lista == NULL) {
        lista = novo;
    }
    else {

        No* aux = lista;

        while(aux->prox != NULL) {
            aux = aux->prox;
        }

        aux->prox = novo;
    }
}

void mostrarLista(No* lista) {

    while(lista != NULL) {
        cout << lista->valor << " -> ";
        lista = lista->prox;
    }

    cout << "NULL" << endl;
}

void inverterLista(No*& lista) {

    No* anterior = NULL;
    No* atual = lista;
    No* proximo;

    while(atual != NULL) {

        proximo = atual->prox;   
        atual->prox = anterior;  
        anterior = atual;       
        atual = proximo;         
    }

    lista = anterior;
}

int main() {

    No* lista = NULL;

   
    inserirFinal(lista, 10);
    inserirFinal(lista, 20);
    inserirFinal(lista, 30);
    inserirFinal(lista, 40);
    inserirFinal(lista, 50);

    cout << "Lista original:" << endl;
    mostrarLista(lista);

   
    inverterLista(lista);

    cout << "Lista invertida:" << endl;
    mostrarLista(lista);

    return 0;
}