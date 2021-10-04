#include <stdlib.h>

int main() /' Início de argumentos '\

{

  int num1, num2, escolha, soma, subtracao, multi, div; /' Controle de variáveis '\

  printf("\n Calculadora RM87644\n"); /' Print de tela '\
  printf("\n Digite um número: "); /' Print de tela '\
  scanf("%d", &num1); /' Solicita ao usuário número que será armazenado na variável especificada '\
  printf("\n O que deseja fazer com este número? \n 1 - Somar \n 2 - Subtrair \n 3 - Multiplicar \n 4 - Dividir \n\n"); /' Print de tela '\
  printf("Opção: "); /' Print de tela '\
  scanf("%d", &escolha); /' Solicita ao usuário número que será armazenado na variável especificada '\

  /' Na sessão de itens abaixo será demonstrado itens dependendo dos cases encadeados por cada ação '\
  if (escolha == 1) {
    printf("\n Deseja Somar o número %d com qual algarismo? \n\n", num1);
  }
  else if (escolha == 2) {
    printf("\n Deseja Subtrair o número %d por qual algarismo? \n\n", num1);
  }
  else if (escolha == 3) {
    printf("\n Deseja Multiplicar o número %d com qual algarismo? \n\n", num1);
  }
  else if (escolha == 4) {
    printf("\n Deseja Dividir o número %d por qual algarismo? \n\n", num1);
  }
  else {
    printf( "\n Erro inesperado \n\n");
  }
  
  /' return 0; '\

  printf("Número: "); /' Print de tela '\
  scanf("%d", &num2); /' Solicita ao usuário número que será armazenado na variável especificada '\
  printf("\n-------------------------------------------\n"); /' Print de tela '\

  soma = num1 + num2; /' Controle de variáveis para soma '\
  subtracao = num1 - num2; /' Controle de variáveis para subtração '\
  multi = num1 * num2; /' Controle de variáveis para multiplicação '\
  div = num1 / num2; /' Controle de variáveis para divisão '\

  /' Na sessão de itens abaixo será demonstrado itens dependendo dos cases encadeados por cada ação '\
  if (escolha == 1) {
    printf( "\n Resultado: A soma de %d + %d é: %d\n\n", num1, num2, soma );
  }
  else if (escolha == 2) {
    printf( "\n Resultado: A subtracao de %d - %d é: %d\n\n", num1, num2, subtracao );
  }
  else if (escolha == 3) {
    printf( "\n Resultado: O produto de %d * %d é: %d\n\n", num1, num2, multi );
  }
  else if (escolha == 4) {
    printf( "\n Resultado: A divisão de %d / %d é: %d\n\n", num1, num2, div );
  }
  else {
    printf( "\n Erro inesperado \n\n");
  }
  
  return 0; /' Finaliza encadeamento de If/else '\

  printf("\n-------------------------------------------\n"); /' Print de tela '\
  
}
