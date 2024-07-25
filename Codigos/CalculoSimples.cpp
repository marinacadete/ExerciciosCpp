#include <iostream>
 
using namespace std;
 
int main() {
    int codigo1,codigo2,num_peca1,num_peca2;
    double valor1,valor2,total;
    scanf("%d%d%lf",&codigo1,&num_peca1,&valor1);
    scanf("%d%d%lf",&codigo2,&num_peca2,&valor2);
    
    total = num_peca1*valor1 + num_peca2*valor2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
