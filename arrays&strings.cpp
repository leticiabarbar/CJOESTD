#include <iostream>
#include <string>

using namespace std;

//A
int main(){
    int numeros[5];
    int maior;

    for(int i = 0; i < 5; i++) {
        cout << "Digite um numero: ";
        cin >> numeros[i];
}
    maior = numeros[0];


//B
    cout << "Array ao contrario:" << endl;
    for(int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;


//C
    string texto;
    int contador = 0;
    cout << "Digite uma palavra ou frase: ";
    cin >> texto;
    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] == 'a') {
            contador++;
        }
    }
    cout << "Quantidade de letras 'a': " << contador << endl;
    return 0;
}



