#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


// O DESAFIO NÃO DEIXOU CLARRO SE EU DEVO FAZER UM ARRAY DE VÁRIAS CARTAS PARA IMPRIR DEPOIS
// FIZ DA MANEIRA SIMPLES COMO PEDIU O ENUNCIADO DE NOVATO
// SOU PROGRAMADOR DE COMPUADOR HÁ MUITOS ANOS E ESTOU FAZENDO ESTE CURSO SÓ PRA TER A GRADUAÇÃ EM REDES
// Herbert de souza kelly
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codcidade = 0;
    char nome[20] = "";
    int populacao = 0; // apesar deste curso não ensinar DEVES-SE INICIALIZAR A VARIAVEL COM UM VALOR PARA NÃO CONTER LIXO!
    int area  = 0;
    int pib = 0;
    int npontoturistico=0;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
	
    printf("\nCodigo da cidade > ");
    scanf("%d", &codcidade); // esse curso poderia ensinar que o & serve para fornescer o ponteiro de armazenamento da variavel

    printf("\nNome > ");
    scanf("%s", nome);  

    printf("\nPopulação > ");
    scanf("%d", &populacao);

    printf("\nArea > ");
    scanf("%d", &area);

    printf("\nPIB > ");
    scanf("%d", &pib);

    printf("\nNumero de pontos turísticos > ");
    scanf("%d", &npontoturistico);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
	printf("\n Imprimindo a carta \n");
    printf("Codigo da cidade: %d\n", codcidade);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("PIB: %d\n", pib);
    printf("Numero de pontos turísticos: %d\n", npontoturistico);
    return 0;
}
