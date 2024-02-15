#include <iostream>
#include <fstream>
#include <json/json.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float menorValor, maiorValor, faturamentoTotal;
    int diasFaturamentoSuperiorMedia, diasComFaturamento = 0;
    Json::Value faturamento;
    ifstream dadosFaturamento("data/faturamento.json", ifstream::binary);

    dadosFaturamento >> faturamento;

    maiorValor = menorValor = faturamento[0]["valor"].asFloat();

    for (Json::Value faturamentoDia : faturamento) {
      float valor = faturamentoDia["valor"].asFloat();

      if (valor > 0) {
        diasComFaturamento++;
        faturamentoTotal += valor;
      }

      if (menorValor > valor) {
        menorValor = valor;
      }

      if (maiorValor < valor) {
        maiorValor = valor;
      }
    }

    float mediaFaturamento = (faturamentoTotal / diasComFaturamento);

    for (Json::Value faturamentoDia : faturamento) {
      float valor = faturamentoDia["valor"].asFloat();

      if (valor > mediaFaturamento) {
        diasFaturamentoSuperiorMedia++;
      }
    }
 
    cout << "Menor valor de faturamento: R$ " << menorValor << endl;
    cout << "Maior valor de faturamento: R$ " << maiorValor << endl;
    cout << "Número de dias no mês em que o valor de faturamento foi superior à média mensal: " << diasFaturamentoSuperiorMedia << endl;
}