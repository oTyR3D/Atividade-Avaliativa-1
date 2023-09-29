#include <stdio.h>
#include <math.h>
double valorX,resultado;
int main(){
do
{
    printf ("Digete o valor de x\n");
    scanf("%lf",&valorX);
    if (valorX<=-5 || valorX>=5)
    {
        resultado=(5*valorX+3)/sqrt((pow(valorX,2)-16));

        printf("\nO resultado e: %.2lf",resultado);
        valorX=0;
    }
    else{
        printf ("O valor de x e invalido para a funcao, tente outro numero\n");
        valorX=1;
    }

} while (valorX!=0);

}