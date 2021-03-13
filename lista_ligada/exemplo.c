//primeiro exemplo
#include <stdio.h>
/*
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

typedef struct reg{
    int conteudo;
    struct reg *prox;

} celula;


void mostrar(celula *le){
    if(le != NULL){
        printf("(%d)\n",le->conteudo);
        mostrar(le->prox);
    }
}

void mostrar_for(celula *le){
    celula *p;
    for(p = le; p != NULL; p = p->prox)
        printf("(%d)\n",p->conteudo);
}



int main(){                      //
                                //
    //oi                       //
    celula c, dois, mais_um;  //
    celula *p;               //

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
    
    mostrar(&c);
    //mostrar_for(&c);
    return 0;
}