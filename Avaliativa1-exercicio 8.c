#include <stdio.h>
int main() {

float salario=0,salarioTotal=0,salarioMaior=0,salarioBaixo=0,salarioMedia=0;
int habitantes=0,filhos=0,filhosTotal=0,filhosMedia=0;
do
{
    printf("\nQual o valor do salario?\n");
    scanf("%f",&salario);

    if (salario>0){
        habitantes++;
        printf("\nQuantos filhos?\n");
        scanf("%d",&filhos);

        salarioTotal=salarioTotal+salario;
        filhosTotal=filhosTotal+filhos;

        if (salario<100){
        salarioBaixo++;
        }
        if (salario>salarioMaior){
        salarioMaior=salario;
        } 
    }  

} while (salario>0);

salarioMedia=salarioTotal/habitantes;
filhosMedia=filhosTotal/habitantes;
salarioBaixo=(salarioBaixo/habitantes)*100;

printf("\nA media do salario e: %.2f\n",salarioMedia);
printf("\nA media de filhos e: %d\n",filhosMedia);
printf("\nO maior salario e: %.2f\n",salarioMaior);
printf("\nPessoas que recebe menos de R$100:\n: %.2f%%",salarioBaixo);
}