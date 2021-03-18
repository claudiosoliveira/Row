#include  <stdio.h>
#include <stdlib.h>

struct Celula {
    int valor;
    struct Celula* proximo;
};

typedef struct Celula Celula;

struct Fila {
    Celula* inicio;
    Celula* fim;
};

typedef struct Fila Fila;

// FUNCAO PARA INICIALIZAR INICIO E FIM COMO NULL
void criaFila( Fila *F); 

// FUNCAO PARA INSERIR UM ELEMENTO NA FILA (INSERIR NO FIM)
void Inserir( Fila *F, int n);

// FUNCAO PARA REMOVER UM ELEMENTO DA PILHA ( REMOVE APENAS O INICIO)
void Remover(Fila *F);

// FUNCAO PARA MOSTRAR O TAMANHO DA FILA
int Tamanho(Fila *F);

// FUNCAO DE BUSCA PARA MOSTRAR A POSICAO DO ELEMENTO DESEJADO, NA FILA, SE EXISTIR
int Busca(Fila *F, int n);

//FUNCAO PARA IMPRIMIR TODOS OS ELEMENTOS DA FILA
void Imprime(Fila *F);

// FUNCAO PARA MOSTRAR NA TELA O MENU COM AS OPERACOES PARA/COM A FILA
void Menu(Fila *F, int j);

void saida (Fila *F);
