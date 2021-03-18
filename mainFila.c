#include<stdio.h>
#include<stdlib.h>
#include"TADFila.h"

int main()
{
   Fila* F = (Fila*)malloc(sizeof(Fila*));
   int b;
   printf("\n-1 - Sair\n");
   printf("1 - Inserir\n");
   printf("2 - Remover\n");
   printf("3 - Buscar\n");
   printf("4 - Tamanho\n");
   printf("5 - Imprimir\n");
   scanf("%i",&b);
   Menu(F,b);
   saida(F);
   return 0;
}
