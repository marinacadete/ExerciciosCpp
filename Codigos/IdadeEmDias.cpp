#include <iostream>
 
using namespace std;
 
int main() {
    int X, ano, mes, dia;
    scanf("%d",&X);
    ano = X/365;
    mes = (X % 365) / 30;
    dia = (X % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
