#include <stdio.h>

int main() {
    //declaracao das variaveis.
    char estado;
    char codigo[] = "A20";
    char cidade[] = "São Paulo";
    int populacao = 1000;
    float area = 1000.0;
    float pib = 10000.0;
    int pontosturisticos = 30;

    printf("Digite o estado\n");
    scanf("%c", &estado);

    printf("Digite o codigo\n");
    scanf("%s", &codigo);

    printf("Digite a cidade\n");
    scanf("%s", &cidade);

    printf("Digite população\n");
    scanf("%d", &populacao);

    printf("Digite a area\n");
    scanf("%f", &area);

    printf("Digite o pib\n");
    scanf("%f", &pib);

    printf("Digite quantidade de pontos turisticos\n");
    scanf("%d", &pontosturisticos);

    printf("Estado: %c\n", estado); 
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area em Km: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    printf("Carta cadastrada com sucesso!");

}