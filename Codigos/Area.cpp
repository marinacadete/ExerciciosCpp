#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    double A,B,C,triangulo,circulo,trapezio,quadrado,retangulo;
    scanf("%lf%lf%lf",&A,&B,&C);
    
    triangulo = (A*C)/2;
    circulo = 3.14159*pow(C,2);
    trapezio = ((A+B)/2)*C;
    quadrado = pow(B,2);
    retangulo = A*B;
 	
	printf("TRIANGULO: %.3lf\n",triangulo);
	printf("CIRCULO: %.3lf\n",circulo);
	printf("TRAPEZIO: %.3lf\n", trapezio);
	printf("QUADRADO: %.3lf\n",quadrado);
	printf("RETANGULO: %.3lf\n",retangulo);
    return 0;
}
