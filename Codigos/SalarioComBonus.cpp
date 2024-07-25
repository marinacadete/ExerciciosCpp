#include <iostream>
 
using namespace std;
 
int main() {
    char nome;
    double fixo,vendas,total;

    scanf("%s%lf%lf",&nome,&fixo,&vendas);
    
    total = fixo + (vendas*0.15);
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;
}
