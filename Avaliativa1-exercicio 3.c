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

        if (a == b && b == c) {
            printf("Formam um triangulo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Forma um triangulo isosceles.\n");
        } else {
            printf("Forma um triangulo escaleno.\n");
        }
    } else {
        printf("Os valores NAO podem formar um triangulo.\n");
    }

    return 0;
}