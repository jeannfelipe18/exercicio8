#include<stdio.h>

int numHomens, numMulheres;
float alturaGrupo,pesoGrupo,altura,peso, alturaHomens, alturaMulheres, pesoHomens, pesoMulheres;
char nome [50], sexo;

main(){
    for(int i = 0; i < 10; i++){
    printf("Digite seu nome:");
    scanf("%s", &nome);

    printf("Digite seu sexo: M ou m para masculino e F ou f para feminino");
    scanf("%s", &sexo);

    printf("Digite sua altura em metros:");
    scanf("%f", &altura);

    printf("Digite seu peso:");
    scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            numHomens++;
            alturaHomens += altura;
            pesoHomens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            numMulheres++;
            alturaMulheres += altura;
            pesoMulheres += peso;
        }
        alturaGrupo += altura;
        pesoGrupo += peso;
    }
    float altura_media_homens = (numHomens > 0) ? alturaHomens / numHomens : 0;
    float altura_media_mulheres = (numMulheres > 0) ? alturaMulheres / numMulheres : 0;
    float altura_media_grupo = alturaGrupo / 10;
    float peso_media_homens = (numHomens > 0) ? pesoHomens / numHomens : 0;
    float peso_media_mulheres = (numMulheres > 0) ? pesoMulheres / numMulheres : 0;
    float peso_media_grupo = pesoGrupo / 10;

    printf("\nResultados:\n");
    printf("Número de homens: %d\n", numHomens);
    printf("Número de mulheres: %d\n", numMulheres);
    printf("Altura média dos homens: %.2f metros\n", altura_media_homens);
    printf("Altura média das mulheres: %.2f metros\n", altura_media_mulheres);
    printf("Altura média do grupo: %.2f metros\n", altura_media_grupo);
    printf("Peso médio dos homens: %.2f quilogramas\n", peso_media_homens);
    printf("Peso médio das mulheres: %.2f quilogramas\n", peso_media_mulheres);
    printf("Peso médio do grupo: %.2f quilogramas\n", peso_media_grupo);

}