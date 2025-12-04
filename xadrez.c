#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Desafio Nível Novato
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* Esta função simula o movimento de três peças de xadrez: Torre (loop for), Bispo (loop while) e Rainha (loop do-while) */
int main()
{

  // Movimento da Torre com o Loop for
  printf("\nSimulação do Movimento da Torre:\n\n");
  // A Torre se move por casas em uma linha reta
  int movimento_casas_torre = 5;

  for (int i = 1; i <= movimento_casas_torre; i++)
  {
    printf("Direita\n");
  }

  // Movimento do Bispo com o Loop while
  printf("\nSimulação do Movimento do Bispo:\n\n");
  // O Bispo se move por casas na diagonal (Cima e Direita)
  int movimento_casas_bispo = 5;
  int contador_movimento_bispo = 0;

  while (contador_movimento_bispo < movimento_casas_bispo)
  {
    printf("Cima, Direita\n");
    contador_movimento_bispo++;
  }

  // Movimento da Rainha com o Loop do-while
  printf("\nSimulação do Movimento da Rainha:\n\n");
  int movimento_casas_rainha = 8;
  int contador_movimento_rainha = 0;

  /* Como o loop do-while executa a ação antes de verificar
  se a condição é verdadeira ou não, é interessante verificar
  previamente se há algum movimento a ser feito para evitar a
  execução desnecessária caso movimento_casas_rainha fosse igual a 0 */
  if (movimento_casas_rainha > 0)
  {
    do
    {
      printf("Esquerda\n");
      contador_movimento_rainha++;

    } while (contador_movimento_rainha < movimento_casas_rainha);
  }
  else
  {
    printf("A Rainha não se moveu!\n");
  }

  return 0;
}
