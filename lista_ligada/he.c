#include <stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    char nome[30];
};

void criar(struct Pessoa *p1, int idade, char nome[30]){
    p1->idade = idade;
    strcpy(p1->nome, nome);
}
int main(){
    struct Pessoa p;
    int idade=40;
    criar(&p,idade,"gustavo");


    printf("nome: %s\n",p.nome);

    printf("idade: %d\n",p.idade);
    return 0;
}