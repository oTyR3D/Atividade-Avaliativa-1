#include <stdio.h>
#include <math.h>

int main() {
double chico=1.5,ze=1.1;
int anos=0;
while (ze<chico){
    ze+=(0.03);
    printf("\nZe: %.2lf",ze);
    chico+=(0.02);
    printf("\nChico: %.2lf ",chico);
    anos++;
    printf("\n%d anos",anos);
}
printf("\nIra demorar %d anos para Ze ser maior que Chico",anos);
}