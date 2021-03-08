//primeiro exemplo
#include <stdio.h>

struct dma{
    int dia;
    int mes;
    int ano;
};
typedef struct dma data;

// emplementacao não tao elegante
/*

Exercícios 1
1. Complete o código da função fimEvento acima.

2. Escreva uma função que receba duas structs do tipo dma, cada uma representando 
uma data válida, e devolva o número de dias que decorreram entre as duas datas.

3. Escreva uma função que receba um número inteiro que representa um intervalo de 
tempo medido em minutos e devolva o número equivalente de horas e minutos 
(por exemplo, 131 minutos equivalem a 2 horas e 11 minutos). Use uma struct como 
a seguinte:


struct hm {
   int horas;
   int minutos;
};

*/


data fimEvento(data inicio, int diracao_dias){
    data fim;
    int dias = 0;
    int mes = 0;
    if((diracao_dias/30)!=0){
        mes = diracao_dias/30;    
    }else{
        
    }
    
    int f;
    printf("(%d)",dias);

    
    //fim.dia = //2;
    //fim.mes = //12;
    //fim.ano = //2020;

    return fim;
}

///funcao auciliar

void mostrar_data(data d){
    printf("%d/%d/%d\n",d.dia,d.mes,d.ano);
}

int main(int argc, char const *argv[])
{

    data x, data_c;
    int diracao_dias = 40;

    
    x.dia = 20;
    x.mes = 23;
    x.ano = 2020;


    data_c = fimEvento(x, diracao_dias);
    //mostrar_data(data_c);

    return 0;
}
