//primeiro exemplo
#include <stdio.h>
#include "declaracao_struct.h"
#include "metodos.h"



/*
    1. Escreva uma função que conte o número de 
    células de uma lista encadeada. Faça duas 
    versões: uma iterativa e uma recursiva.
    
    2. Altura.  A altura de uma célula c em uma 
    lista encadeada é a distância entre c e 
    o fim da lista. Mais precisamente, a 
    altura de c é o número de passos do 
    caminho que leva de c até a última 
    célula da lista.  Escreva uma função 
    que calcule a altura de uma dada célula.
    
    3. Profundidade.  A profundidade de uma 
    célula c em uma lista encadeada é o número 
    de passos do único caminho que vai da 
    primeira célula da lista até c.  
    Escreva uma função que calcule a 
    profundidade de uma dada célula. 
*/

int main(int argc, char const *argv[])
{
    //oi                       //
    celula c, dois, mais_um;  //

    //se c é uma celula então
    //c.conteudo é o conteúdo da celula e c.prox é p próximo

    //se *p é o endereço de uma celula então
    //c->conteudo é o conteúdo da celula e c->prox é p próximo
    
    printf("sizeof (celula) = %ld\n",sizeof(celula));

    c.conteudo = 12;
    dois.conteudo = 30;
    mais_um.conteudo = 3;

    //genial o ultomo aponta para null
    //vovo programador tem que especificar isso
    mais_um.prox = NULL;
    dois.prox = &mais_um;

    c.prox = &dois;

    //printf("c.conteudo(%d)\n",c.conteudo);
    //printf("c.prox->conteudo(%d)\n",c.prox->conteudo);

    printf("soma_recursivo = %d\n",contando_no_recursivo(&c,0));
    //printf("soma_for = %d\n",contando_no_for(&c));


    return 0;
}
