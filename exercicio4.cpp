#include <iostream>
using namespace std;

struct faturamento{
    string Estado;
    float Valor;
    
};


int main() {
    setlocale(LC_ALL, "Portuguese");

    float Soma;

    faturamento faturamentoMensal[5]; 

    faturamentoMensal[0].Estado = "SP";
    faturamentoMensal[0].Valor = 67836.43;

    faturamentoMensal[1].Estado = "RJ";
    faturamentoMensal[1].Valor = 36678.66;

    faturamentoMensal[2].Estado = "MG";
    faturamentoMensal[2].Valor = 29229.88;

    faturamentoMensal[3].Estado = "ES";
    faturamentoMensal[3].Valor = 27165.48;

    faturamentoMensal[4].Estado = "Outros";
    faturamentoMensal[4].Valor = 19849.53;

    for ( int i = 0; i <= 5; i++){
        Soma = Soma + faturamentoMensal[i].Valor;
    }

    for ( int x = 0; x <= 4; x++){
        cout << "Estado: " << faturamentoMensal[x].Estado << endl;
        cout << "Percentual: " << (faturamentoMensal[x].Valor / Soma)*100 <<  "%" << endl;
    }

    return 0;
}