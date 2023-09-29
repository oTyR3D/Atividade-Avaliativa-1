#include <stdio.h>

int main() {
    double a, b, c;

    printf("Digite o valor do lado a: ");
    scanf("%lf", &a);

    printf("Digite o valor do lado b: ");
    scanf("%lf", &b);

    printf("Digite o valor do lado c: ");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            printf("Os valores %2.lf, %2.lf, %2.lf, Formam um Triangulo Retangulo = 90 graus.\n",a,b,c);
        } else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) {
            printf("Os valores %2.lf, %2.lf, %2.lf, Formam um Triangulo Obtusangulo > 90 graus.\n",a,b,c);
        } else {
            printf("Os valores %2.lf, %2.lf, %2.lf, Formam um Triangulo acutangulo < 90 graus.\n",a,b,c);
        }
    } else {
        printf("Os lados NAO podem formar um triangulo.\n");
    }

    return 0;
}
