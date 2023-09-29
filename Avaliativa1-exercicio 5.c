#include <stdio.h>
#include <math.h>


int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite o valor de X1: ");
    scanf("%lf", &x1);

    printf("Digite o valor de X2: ");
    scanf("%lf", &x2);

    printf("Digite o valor de Y1: ");
    scanf("%lf", &y1);

    printf("Digite o valor de Y2: ");
    scanf("%lf", &y2);

distancia=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("A distancia e: %.4lf",distancia);
}