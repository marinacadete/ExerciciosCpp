#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    double A,B,C,delta,r1,r2;
    scanf("%lf%lf%lf",&A,&B,&C);
    
    delta = pow(B,2)-4*A*C;
    r1 = (-B+sqrt(delta))/(2*A);
    r2 = (-B-sqrt(delta))/(2*A);
    
    if (delta < 0 || 2*A==0)
        printf("Impossivel calcular\n");
    else
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    
    return 0;
}
