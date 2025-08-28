#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado,Estado1;
    char Código[10],Código1[10];
    char Cidade[20],Cidade1[20];
    int População,População1;
    float Area,Area1;
    float Pib,Pib1;
    int Pontos_turisticos,Pontos_turisticos1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Cadastrar Primeira Carta \n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Código);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a população: \n");
    scanf("%d", &População);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);
   
   printf("\nCadastrar Segunda Carta \n");

    printf("Digite a letra do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &Código1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a população: \n");
    scanf("%d", &População1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos1);

    printf("Dados da Primeira carta:\n");

    printf("Estado: %s\n",Estado);
    printf("Código da carta: %s\n",Código);
    printf("Nome da Cidade: %s\n",Cidade);
    printf("População: %d\n",População);
    printf("Area em km: %f\n",Area);
    printf("PIB da Cidade: %f\n",Pib);
    printf("Numeros de pontos turisticos: %d\n",Pontos_turisticos);

    printf("\nDados da Segunda Carta:\n");

    printf("Estado: %s\n",Estado1);
    printf("Código da carta: %s\n",Código1);
    printf("Nome da Cidade: %s\n",Cidade1);
    printf("População: %d\n",População1);
    printf("Area em km: %f\n",Area1);
    printf("PIB da Cidade: %f\n", Pib1);
    printf("Numeros de pontos turisticos: %d\n",Pontos_turisticos1);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
