#include <stdio.h>
int main() {

float ;
int candidato1=0,candidato2=0,candidato3=0,candidato4=0,nulo=0,branco=0,voto;

do{
    printf("\nDigite o codigo do voto:\n");
    scanf("%d",&voto);
    switch (voto){
        case 1:
            candidato1++;
            printf("\nVoto Valido");
        break;

        case 2:
            candidato2++;
            printf("\nVoto Valido");
        break;

        case 3:
            candidato3++;
            printf("\nVoto Valido");
        break;

        case 4:
            candidato4++;
            printf("\nVoto Valido");
        break;

        case 5:
            nulo++;
            printf("\nVoto Valido");
        break;

        case 6:
            branco++;
            printf("\nVoto Valido");
        break;
        case 0:
            printf("\nFinalizando a votacao:\n");
        break;

    default:
    printf("\nVoto INVALIDO tente novamente");
        break;
}

} while (voto!=0);
printf("\nTotal de votos no candidato 1: %d",candidato1);
printf("\nTotal de votos no candidato 2: %d",candidato2);
printf("\nTotal de votos no candidato 3: %d",candidato3);
printf("\nTotal de votos no candidato 4: %d",candidato4);
printf("\nTotal de votos nulos: %d",nulo);
printf("\nTotal de votos em branco: %d",branco);
}


/*9. Em uma eleição presidencial existem quatro candidatos. 
Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.*/