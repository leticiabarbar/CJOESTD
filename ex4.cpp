#include <iostream>
using namespace std;

int calcularSoma(int numero) {

    if(numero == 1) {
        return 1;
    }

    return numero + calcularSoma(numero - 1);
}

int main() {

    cout << "Soma de 1 ate 5: " << calcularSoma(5) << endl;
    cout << "Soma de 1 ate 10: " << calcularSoma(10) << endl;

    return 0;
}