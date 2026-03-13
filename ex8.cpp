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

void removerValor(No*& lista, int num) {

    No* atual = lista;
    No* anterior = NULL;

    while(atual != NULL && atual->valor != num) {
        anterior = atual;
        atual = atual->prox;
    }

    if(atual == NULL) {
        cout << "Valor nao encontrado na lista!" << endl;
        return;
    }

    if(anterior == NULL) {
        lista = atual->prox;
    }
    else {
        anterior->prox = atual->prox;
    }

    delete atual;

    cout << "Valor removido com sucesso!" << endl;
}

int main() {

    No* lista = NULL;

    inserirFinal(lista, 5);
    inserirFinal(lista, 15);
    inserirFinal(lista, 25);
    inserirFinal(lista, 35);
    inserirFinal(lista, 45);

    cout << "Lista inicial:" << endl;
    mostrarLista(lista);

    int num;

    cout << "Digite um valor para remover: ";
    cin >> num;

    removerValor(lista, num);

    cout << "Lista depois da remocao:" << endl;
    mostrarLista(lista);

    return 0;
}