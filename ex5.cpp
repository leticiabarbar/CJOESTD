#include <iostream>
using namespace std;

int calcularFibonacci(int numero) {

    if(numero == 0) {
        return 0;
    }

    if(numero == 1) {
        return 1;
    }

    return calcularFibonacci(numero - 1) + calcularFibonacci(numero - 2);
}

int main() {

    cout << "Sequencia de Fibonacci: ";

    for(int i = 0; i < 8; i++) {
        cout << calcularFibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}