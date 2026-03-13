#include <iostream>
using namespace std;

string inverterPalavra(string texto) {

    if(texto.length() <= 1) {
        return texto;
    }

    return inverterPalavra(texto.substr(1)) + texto[0];
}

int main() {

    cout << "Palavra invertida: " << inverterPalavra("radar") << endl;
    cout << "Palavra invertida: " << inverterPalavra("hello") << endl;
    cout << "Palavra invertida: " << inverterPalavra("estrutura") << endl;

    return 0;
}