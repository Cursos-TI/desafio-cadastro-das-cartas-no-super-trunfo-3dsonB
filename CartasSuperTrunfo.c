#include <stdio.h>

int main() {

    // Declaração das Variáveis

    int populacao, populacao2, pontosTuristicos, pontosTuristicos2;
    float area, area2, pib, pib2;
    char codigo[3], codigo2;

    // Entrada de Dados

    printf("**** JOGO SUPER TRUNFO 1.00 ****\n\n");

    // Solicita o código da Carta
    printf("Digite o Código da Carta: ");

    // Entra com o código
    scanf(" %s", &codigo);

    // Solicita a população
    printf("Digite a população da Cidade: ");

    // Entra com a população
    scanf(" %d", &populacao);

    // Solicita o PIB
    printf("Digite o PIB da Cidade: ");

    // Entra com o PIB
    scanf(" %f", &pib);

    // Solicita a área da cidade
    printf("Digite a área da cidade: ");

    // Entra com a área da ciadade
    scanf(" %f", &area);

    // Solicita a área da cidade
    printf("Digite o número de pontos turísticos da cidade: ");

    // Entra num. pontos turísticos
    scanf(" %f", &pontosTuristicos);


    // Solicita o código da Carta
    printf("Digite o Código da Carta: ");

    // Entra com o código
    scanf(" %s", &codigo2);

    // Solicita a população
    printf("Digite a população da Cidade: ");

    // Entra com a população
    scanf(" %d", &populacao2);

    // Solicita o PIB
    printf("Digite o PIB da Cidade: ");

    // Entra com o PIB
    scanf(" %f", &pib2);

    // Solicita a área da cidade
    printf("Digite a área da cidade: ");

    // Entra com a área da ciadade
    scanf(" %f", &area2);

    // Solicita a área da cidade
    printf("Digite o número de pontos turísticos da cidade: ");

    // Entra num. pontos turísticos
    scanf(" %f", &pontosTuristicos2);


    // Área de Processamento de Dados

    // Calcula a densidade Populaçional
    double densidade = populacao/area;

    // Calcula o PIB Percápta
    double pibPercapta = pib/populacao;

    // Calcula a densidade Populaçional
    double densidade2 = populacao2/area2;

    // Calcula o PIB Percápta
    double pibPercapta2 = pib2/populacao2;

    // Área de saída de dados

    // exibe as informações da Carta
    printf(" --- CARTA SELECIONADA --- \nCARTA %s \nPOPULAÇÃO: %d \nPIB: %f \nÁREA: %f \nPONTOS TURÍSTICOS: %d \nPIB PERCAPTA: %f \nDENS. POPULACIONAL: %f \n\n\n", codigo, populacao, pib, area, pontosTuristicos, pibPercapta, densidade);


    // exibe as informações da Carta
    printf(" --- CARTA SELECIONADA --- \nCARTA %s \nPOPULAÇÃO: %d \nPIB: %f \nÁREA: %f \nPONTOS TURÍSTICOS: %d \nPIB PERCAPTA: %f \nDENS. POPULACIONAL: %f", codigo2, populacao2, pib2, area2, pontosTuristicos2, pibPercapta2, densidade2);

    // Compara População
    if(populacao2 > populacao){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO POPULAÇÃO! \n", codigo2);
    }
    else{
        printf("A CARTA %s FOI VENCEDORA NO QUISITO POPULAÇÃO! \n", codigo);
    }

    // Compara PIB
    if(pib2>pib){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO PIB! \n", codigo2);
    }
    else printf("A CARTA %s FOI VENCEDORA NO QUISITO PIB! \n", codigo);

    if(area2>area){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO PIB!", codigo2);
    }
    else printf("A CARTA %s FOI VENCEDORA NO QUISITO PIB!", codigo);

    if(area2>area){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO ÁREA! \n", codigo2);
    }
    else{printf("A CARTA %s FOI VENCEDORA NO QUISITO ÁREA! \n", codigo);}

    if(pontosTuristicos2>pontosTuristicos){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO TURÍSMO!\n", codigo2);
    }
    else{printf("A CIDADE %S FOI VENCEDORA NO QUISITO TURISMO!\n", codigo);}

    if(pibPercapta2>pibPercapta){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO RIQUESA", codigo2);
    }
    else printf("A CARTA %s FOI VENCEDORA NO QUISITO RIQUESA", codigo);

    if(densidade2<densidade){
        printf("A CARTA %s FOI VENCEDORA NO QUISITO DENSIDADE POPULACIONAL", codigo2);
    }
    else printf("A CARTA %s FOI VENCEDORA NO QUISITO DENSIDADE POPULACIONAL", codigo);

    return 0;
}
