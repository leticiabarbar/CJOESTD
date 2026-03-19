//A
#include <iostream>

using namespace std;

int main() {

    int x = 7;      
    int *p;         

    p = &x;         

    *p = 21;       

    cout << "Valor de x: " << x << endl;

    return 0;
}

//B
#include <iostream>

using namespace std;

int main() {

    int *p = new int;   

    *p = 100;          

    cout << "Valor: " << *p << endl;  

    delete p;           
    return 0;
}

//C 
#include <iostream>

using namespace std;

struct Ponto {
    int x;
    int y;
};

int main() {

    Ponto *p = new Ponto;   

    p->x = 3.5;            
    p->y = 7.2;

    cout << "x: " << p->x << endl;
    cout << "y: " << p->y << endl;

    delete p;              
    return 0;
}