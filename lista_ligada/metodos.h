#include <stdio.h>



int contando_no_recursivo(celula *le, int soma){
    if(le == NULL){
        return soma;
    }else{
        printf(" le->%d | soma = %d\n",le->conteudo, soma);
        return soma + contando_no_recursivo(le->prox, soma++);
    }
}

int contando_no_for(celula *le){
    int cont = 0;
    for(celula *p = le; p != NULL;p = p->prox){
        cont+=1;
        printf("no(%d)\n",p->conteudo);
    }
    return cont; 
}