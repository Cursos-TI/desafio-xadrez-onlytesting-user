#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Desafio Nível Mestre
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

// Função responsável por implementar o movimento da Torre
void moverTorre(int casas_restantes)
{
  // Condição de parada da recursividade
  if (casas_restantes <= 0)
  {
    return;
  }

  printf("Direita\n");

  /* A função chama a si mesma até que o número de passos a ser feito chegue a 0 */
  moverTorre(casas_restantes - 1);
}

// Função responsável por implementar o movimento do Bispo
void moverBispo(int casas_restantes)
{
  // Condição de parada da recursividade
  if (casas_restantes <= 0)
  {
    return;
  }

  /* O Bispo se move por casas na diagonal, o que significa que para cada movimento vertical há um movimento na horizontal */

  // Loop for para movimento vertical
  for (int i = 0; i < 1; i++)
  {
    printf("Cima\n");

    // Loop for aninhado para movimento horizontal
    for (int j = 0; j < 1; j++)
    {
      printf("Direita\n");
    }
  }

  // Recursividade aplicada
  moverBispo(casas_restantes - 1);
}

// Função responsável por implementar o movimento da Rainha
void moverRainha(int casas_restantes)
{
  // Condição de parada da recursividade
  if (casas_restantes <= 0)
  {
    return;
  }

  printf("Esquerda\n");

  // Recursividade aplicada
  moverRainha(casas_restantes - 1);
}

// Função responsável por implementar o movimento do Cavalo
void moverCavalo(int movimento_cavalo_vertical, int movimento_cavalo_horizontal)
{
  int contador_movimento_vertical = 0;
  int contador_movimento_horizontal = 0;

  // Loop for para Movimento Vertical
  for (contador_movimento_vertical = 0; contador_movimento_vertical < movimento_cavalo_vertical; contador_movimento_vertical++)
  {
    printf("Cima\n");

    // O movimento horizontal só ocorre após o último passo na vertical
    if (contador_movimento_vertical == movimento_cavalo_vertical - 1)
    {
      contador_movimento_horizontal = 0;

      // O loop do-while aninhado será executado após o último passo na vertical
      do
      {
        printf("Direita\n");
        contador_movimento_horizontal++;
      } while (contador_movimento_horizontal < movimento_cavalo_horizontal);

      // Para sair do loop for externo após completar todo o movimento
      break;
    }
  }
}

/* Função Principal - centraliza as chamadas às outras funções e permite a testagem do programa */
int main()
{
  const int MOVIMENTO_TORRE = 5;
  const int MOVIMENTO_BISPO = 5;
  const int MOVIMENTO_RAINHA = 8;
  const int MOVIMENTO_CAVALO_VERTICAL = 2;
  const int MOVIMENTO_CAVALO_HORIZONTAL = 1;

  // Movimento da Torre
  printf("Simulação do Movimento da Torre:\n\n");
  moverTorre(MOVIMENTO_TORRE);

  // Movimento do Bispo
  printf("\nSimulação do Movimento do Bispo:\n\n");
  moverBispo(MOVIMENTO_BISPO);

  // Movimento da Rainha
  printf("\nSimulação do Movimento da Rainha:\n\n");
  moverRainha(MOVIMENTO_RAINHA);

  // Movimento do Cavalo
  printf("\nSimulação do Movimento do Cavalo:\n\n");
  moverCavalo(MOVIMENTO_CAVALO_VERTICAL, MOVIMENTO_CAVALO_HORIZONTAL);

  return 0;
}
