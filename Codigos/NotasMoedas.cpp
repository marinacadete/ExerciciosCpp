#include <iostream>
#include <cmath>
 
using namespace std;

int main() {
    double N;
    int n1,n2,n3,n4,n5,n6,m1,m2,m3,m4,m5,m6,inteira,fracionaria;
    scanf("%lf", &N);

    inteira = int(N);
    fracionaria = ceilf((N - inteira)*100);

    n1 = inteira/100;
    n2 = (inteira%100)/50;
    n3 = ((inteira%100)%50)/20;
    n4 = (((inteira%100)%50)%20)/10;
    n5 = ((((inteira%100)%50)%20)%10)/5;
    n6 = (((((inteira%100)%50)%20)%10)%5)/2;

    m1 = ((((((inteira%100)%50)%20)%10)%5)%2)/1;
    m2 = fracionaria/50;
    m3 = (fracionaria%50)/25;
    m4 = ((fracionaria%50)%25)/10;
    m5 = (((fracionaria%50)%25)%10)/5;
    m6 = ((((fracionaria%50)%25)%10)%5)/1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",n1,n2,n3,n4,n5,n6);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",m1,m2,m3,m4,m5,m6);
    return 0;
}
