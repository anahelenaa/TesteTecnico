#include <iostream>
#include <cmath>

using namespace std;

//Exercício 2 - Fibonacci

//Um número faz parte da sequência de fibonacci se e apenas se um ou ambos de (5*(x*x) - 4) ou (5*(x*x) + 4) for um quadrado perfeito.
//A função abaixo é para verificarmos se é um quadrado perfeito.

bool QuadradoPerfeito(int x){
    float raiz;
    
    raiz = sqrt (x);

    return std::floor(raiz)==raiz;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    
    cout << "Insira o número que desja verificar se é parte da sequencia de Fibonacci: ";
    cin >> x;
    
    y = 5 * (x*x);

    if (QuadradoPerfeito(y-4) || QuadradoPerfeito(y+4)){
        cout << "Esta na sequência fibonacci"; 
    }
    else {
        cout << "Não esta na sequência fibonacci"; 
    }

    return 0;
}