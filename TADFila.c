 #include"TADFila.h"
#include<stdio.h>
#include<stdlib.h>

void criaFila( Fila *F)
{
    F->inicio = NULL;
    F->fim = NULL;
}

void Inserir( Fila *F, int n)
{
   Celula *nova = (Celula*)malloc(sizeof(Celula));
   nova->valor = n;
   if(F->fim==NULL)
   {
      F->inicio = nova;
      F->fim = nova;
   }
   else
   {
      nova->proximo = F->fim;
      F->fim = nova;
   }
}

void Remover(Fila *F)
{
   Celula *temp;
   if(F->inicio==NULL&&F->fim==NULL)
   {
      printf("Fila Vazia!");
   }
   else
   {
      temp= F->fim;
      if(temp->proximo==NULL)
      {
         F->inicio=NULL;
         F->fim=NULL;
         free(temp);
      }
      else
      {
         while(temp->proximo!=F->inicio)
         {
            temp = temp->proximo;
         }
         F->inicio=temp;
         temp=temp->proximo;
         free(temp);
         F->inicio->proximo = NULL;
      }
   }
}

int Tamanho(Fila *F)
{
   int i=0;
   Celula *temp;
   temp = F->fim;
   if(F->fim==NULL)
   {
      return i;
   }
   else
   {
      i++;
      while(temp!=NULL)
      {
         temp=temp->proximo;
         i++;
      }
      return i;
   }
}

int Busca(Fila *F, int n)
{
   Celula *temp;
   temp = F->fim;
   if(F->fim==NULL)
   {
      printf("Fila Vazia!");
      return 2;
   }
   else
   {
      while(temp!=NULL)
      {
         if(temp->valor==n)
         {
            return 1;
         }
         else
         {
            temp = temp->proximo;
         }
      }
   }
   return 2;
}

void Imprime(Fila *F)
{
   Celula *temp;
   temp = F->fim;
   if(F->fim==NULL)
   {
      printf("Fila Vazia!");
   }
   else
   {
      printf("|");
      printf("%i->",temp->valor);
      while(temp!=NULL)
      {
         temp=temp->proximo;
         printf("%i",temp->valor);
         if(temp->proximo!=NULL)
         {
            printf("->");
         }
         else
         {
            printf("|");
         }
      }
   }
}

void Menu (Fila *F, int j)
{
   int i,a;
   while(j!=-1)
   {
      switch(j)
      {
         case 1:
            scanf("%i",&i);
            Inserir(F,i);

         case 2:
            Remover(F);
 
         case 3:
            scanf("%i",&i);
            a = Busca(F,i);
            if(a==1)
            {
               printf("Existe o valor");
            }
            if(a==2)
            {
               printf("Este Elemento Não Existe Na Fila!");
            } 

        case 4:
           i = Tamanho(F);
        
        case 5:
           Imprime(F);
        default:
           printf("Opcao invalida"); 
      }
      printf("\n-1 - Sair\n");
      printf("1 - Inserir\n");
      printf("2 - Remover\n");
      printf("3 - Buscar\n");
      printf("4 - Tamanho\n");
      printf("5 - Imprimir\n");
      scanf("%i",&j);
      Menu(F,j);
   }
}

void saida (Fila *F)
{
   while(F->fim!=NULL)
   {
      Remover(F);
   }
   free(F);
}
