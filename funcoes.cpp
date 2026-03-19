#include <iostream>

using namespace std;

//A
int maximo(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

//B
void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//C
bool ehPar(int n){
    if (n % 2 == 0)
        return true;
    else
        return false;
}