#include <iostream>
#include <stack>

using namespace std; 

int main() {

    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    pilha.push(50);

    cout << "Topo da pilha: " << pilha.top() << endl;

    pilha.pop();
    pilha.pop();

    cout << "Novo topo da pilha: " << pilha.top() << endl;

    return 0;
}