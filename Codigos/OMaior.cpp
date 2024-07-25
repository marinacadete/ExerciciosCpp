#include <iostream>
 
using namespace std;
 
int main() {
    int A,B,C,maiorAB, maiorC;
    scanf("%d%d%d",&A,&B,&C);
    maiorAB = (A + B + abs(A-B))/2;
    maiorC = (maiorAB + C + abs(maiorAB-C))/2;
    printf("%d eh o maior\n",maiorC);
    return 0;
}
