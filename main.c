#include <stdio.h>

int main(void) {
  int opção;
  do {

    printf("\nMenu princiapl\n");
    printf("1 - Criar tarefa \n");
    printf("2 - Deletar tarefa \n");
    printf("3 - Listar tarefas \n");
    printf("0 - Sair \n");
    printf("Entre com uma opção:  \n");
    int i = scanf("%d", &opção);
    printf("Opção escolhida: %d\n", opção);
  } while (opção != 0);
}