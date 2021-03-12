//primeiro exemplo
#include <stdio.h>

struct reg{
    int conteudo;
    struct reg *prox;
};
typedef struct reg celula;
// uma alterenativa a esta declaração e a pode ser assim

/*
typedef struct reg celula;
struct reg{
    int conteudo;
    celula *prox;
};
*/

//ou ainda assim

/*
typedef struct reg{
    int conteudo;
    struct reg *prox;

} celula;
*/


int main(){

    celula c, dois;
    celula *p;

    //se c é uma celula então
    //c.conteudo é o conteúdo da celula e c.prox é p próximo

    //se *p é o endereço de uma celula então
    //c->conteudo é o conteúdo da celula e c->prox é p próximo
    
    printf("sizeof (celula) = %ld\n",sizeof(celula));

    c.conteudo = 12;



    dois.conteudo = 30;
    c.prox = &dois;


    printf("c.conteudo(%d)\n",c.conteudo);
    printf("c.prox->conteudo(%d)\n",c.prox->conteudo);
    
    return 0;
}