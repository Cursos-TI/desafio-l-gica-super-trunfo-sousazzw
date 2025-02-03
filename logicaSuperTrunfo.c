#include <stdio.h>

#define MAX_CIDADES 32 // 8 estados * 4 cidades cada

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidadeA, cidadeB;
    char atributo[20];

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Código (Ex: A01, B02): ");
    scanf("%s", cidadeA.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^"]", cidadeA.nome);
    printf("População: ");
    scanf("%d", &cidadeA.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidadeA.area);
    printf("PIB (em bilhões): ");
    scanf("%lf", &cidadeA.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidadeA.pontos_turisticos);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Código (Ex: A01, B02): ");
    scanf("%s", cidadeB.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^"]", cidadeB.nome);
    printf("População: ");
    scanf("%d", &cidadeB.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidadeB.area);
    printf("PIB (em bilhões): ");
    scanf("%lf", &cidadeB.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &cidadeB.pontos_turisticos);

    // Escolha do atributo para comparação
    printf("\nEscolha o atributo para comparação (populacao, area, pib, pontos_turisticos): ");
    scanf("%s", atributo);

    // Comparação das cidades
    if (strcmp(atributo, "populacao") == 0) {
        if (cidadeA.populacao > cidadeB.populacao) {
            printf("A cidade vencedora é: %s (Maior População)\n", cidadeA.nome);
        } else {
            printf("A cidade vencedora é: %s (Maior População)\n", cidadeB.nome);
        }
    } else if (strcmp(atributo, "area") == 0) {
        if (cidadeA.area > cidadeB.area) {
            printf("A cidade vencedora é: %s (Maior Área)\n", cidadeA.nome);
        } else {
            printf("A cidade vencedora é: %s (Maior Área)\n", cidadeB.nome);
        }
    } else if (strcmp(atributo, "pib") == 0) {
        if (cidadeA.pib > cidadeB.pib) {
            printf("A cidade vencedora é: %s (Maior PIB)\n", cidadeA.nome);
        } else {
            printf("A cidade vencedora é: %s (Maior PIB)\n", cidadeB.nome);
        }
    } else if (strcmp(atributo, "pontos_turisticos") == 0) {
        if (cidadeA.pontos_turisticos > cidadeB.pontos_turisticos) {
            printf("A cidade vencedora é: %s (Mais Pontos Turísticos)\n", cidadeA.nome);
        } else {
            printf("A cidade vencedora é: %s (Mais Pontos Turísticos)\n", cidadeB.nome);
        }
    } else {
        printf("Atributo inválido.\n");
    }

    return 0;
}


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
