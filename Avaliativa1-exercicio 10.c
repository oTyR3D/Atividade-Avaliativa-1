#include <stdio.h>
#include<string.h>
int main() {

int codigoCidade=0,veiculos=0,cidade=0,cidadeRS=0,res1=0,res2=0;
float maiorAcidentes,menorAcidentes,mediaVeiculos=0,mediaAcidentesRS=0,acidentes;
char teste1[]="RS"; 
char teste2[]="rs";
char estado[3];
char estadoMaior[3];
char estadoMenor[3];
do{
    cidade++;
    printf("Cadastro Cidade Numero: %d",cidade);
    printf("\nDigite o codigo da cidade:\n");
    scanf("%d",&codigoCidade);
    fflush (stdin);
    printf("\nDigite a sigla do estado da cidade:\n");
    fgets(estado,3,stdin);
    fflush (stdin);
    printf("\nDigite o numero de veículos de passeio:\n");
    scanf("%d",&veiculos);
    fflush (stdin);
    printf("\nDigite o numero de acidentes de transito com vitimas:\n");
    scanf("%f",&acidentes);
    fflush (stdin);

    if (acidentes<menorAcidentes){
        menorAcidentes=acidentes;
        strcpy(estadoMenor,estado);
    }
    if (acidentes>maiorAcidentes){
        maiorAcidentes=acidentes;
        strcpy(estadoMaior,estado);
    }


    res1= strcmp(teste1, estado);
    res2= strcmp(teste2, estado);
    if (res1 == 0 || res2 == 0){
        cidadeRS++;
        mediaAcidentesRS=mediaAcidentesRS+acidentes;
    }

    mediaVeiculos=mediaVeiculos+veiculos;
} while (cidade!=200);
mediaVeiculos=(mediaVeiculos/cidade);
mediaAcidentesRS=(mediaAcidentesRS/cidadeRS);
printf("\nO MAIOR indice de acidedentes e %.2f do estado %s\n",maiorAcidentes,estadoMaior);
printf("\nO MENOR indice de acidedentes e %.2f do estado %s\n",menorAcidentes,estadoMenor);
printf("\nA media de veiculos das cidades brasileiras e %.2f\n",mediaVeiculos);
printf("\nA media de acidentes com vitimas nas cidades do Rio Grande do Sul e %.2f\n",mediaAcidentesRS);

}


/*10. Foi feita uma estatística nas 3 principais cidades brasileiras para coletar 
dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  
- código da cidadexx
- estado (RS, SC, PR, SP, RJ, ...)xx
- número de veículos de passeio (em 1992)xx
- número de acidentes de trânsito com vítimas (em 1992)xx
Deseja-se saber:
a) qual o maior e x
o menor índice de acidentes de trânsito x
e a que cidades pertencemx

b) qual a média de veículos nas cidades brasileirasx

c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.
Bom trabalho!*/
