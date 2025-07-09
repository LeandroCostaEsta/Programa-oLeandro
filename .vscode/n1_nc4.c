#include <stdio.h>

int main(){
    int idade = 34;
    int quantidade = 1;
    float altura = 1.73 
    double peso =80.2
    char letra = 'L'; // Corrigido de 'leatra' para 'letra'
    char nome[100] =  "leandro"/ Definido tamanho do array


    // Exemplo de uso das variáveis
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    printf("Digite seu nome: ");
    scanf("%99s", nome);

    printf("\nIdade: %d\nQuantidade: %d\nAltura: %.2f\nLetra: %c\nNome: %s\n", idade, quantidade, altura, letra, nome);

    return 0;
}
