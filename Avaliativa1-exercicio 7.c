#include <stdio.h>
int main() {

float prova1,prova2,prova3,mediaP=0,media=0,soma=0;
int aluno=0;
do{
    aluno++;
    printf("\nAluno Numero: %d\n",aluno);
    printf("Escreva as 3 notas:\n");
    scanf("%f %f %f",&prova1,&prova2,&prova3);

    mediaP = ( prova1*2 + prova2*4 + prova3*3 ) / 10;
    soma=soma+(prova1+prova2+prova3);

    if (mediaP>=7){
        printf("\nA media ponderada do aluno N %d foi %.2f, APROVADO\n",aluno,mediaP);
    }
    else{
        printf("\nA media ponderada do aluno N %d foi %.2f, REPROVADO\n",aluno,mediaP);
    }

} while (aluno!=30);
media=soma/(aluno*3);
printf ("\nA media geral da turma é\n: %.2f", media);
}