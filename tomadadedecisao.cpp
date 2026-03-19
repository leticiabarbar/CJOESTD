#include <iostream>
using namespace std;

//A
int main(){
    float nota;
    int i = 1;
    int contador = 0;

    while(i <= 5){
        cout << "Digite a nota";
        cin >> nota;

        if(nota > 7){
            contador ++;
        }
        i++;
    }
    cout << "Quantidade de notas maiores que 7: " << contador << endl;

//B
int numero;
    int soma = 0;

    cout << "Digite um numero (0 para parar): ";
    cin >> numero;

    while(numero != 0){
        soma += numero;
        cout << "Digite um numero (0 para parar): ";
        cin >> numero;
    }
    cout << "Soma dos numeros: " << soma << endl;

//C
int num;
    cout << "Digite um numero para ver a tabuada: ";
    cin >> num;
    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
