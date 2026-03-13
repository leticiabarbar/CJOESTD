#include <iostream>
#include <stack>

using namespace std;

bool verificarParenteses(string texto) {

    stack<char> pilha;

    for(char c : texto) {

        if(c == '(') {
            pilha.push(c);
        }

        else if(c == ')') {

            if(pilha.empty()) {
                return false;
            }

            pilha.pop();
        }
    }

    return pilha.empty();
}

int main() {

    cout << "Teste 1: " << verificarParenteses("(()())") << endl;
    cout << "Teste 2: " << verificarParenteses("((())") << endl;
    cout << "Teste 3: " << verificarParenteses("())()") << endl;

    return 0;
}