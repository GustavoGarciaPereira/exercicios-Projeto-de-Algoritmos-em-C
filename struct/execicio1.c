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


data fimEvento(data inicio, int duracao_dias){
    data fim;
    int dias = 0;
    int mes = 0;
    
    fim.ano = inicio.ano;
    fim.dia = inicio.dia;
    fim.mes = inicio.mes;


    if(duracao_dias / 365 > 0){
        printf("eii");
    }
    if(duracao_dias / 30 > 0){
        printf("%d",(duracao_dias / 30));
        fim.mes += (duracao_dias / 30);
        fim.dia += (duracao_dias-(duracao_dias / 30)*30);

        if(fim.dia >= 30){
            fim.mes += 1;
        }
        if(inicio.mes >= 12){
            //fim.mes = 0;
            fim.mes += (duracao_dias / 30);
            fim.ano += 1;
        }

    }

    return fim;
}

///funcao auciliar

void mostrar_data(data d){
    printf("\n\n\n\n: %d/%d/%d\n",d.dia,d.mes,d.ano);
}

int main(int argc, char const *argv[])
{

    data x, data_c;
    int duracao_dias;
    x.dia = 12;
    x.mes = 12;
    x.ano = 2020;
    duracao_dias = 50;
    //printf("x.dia:");
    //scanf("%d",&x.dia);
    //printf("x.mes:");
    //scanf("%d",&x.mes);
    //printf("x.ano:");
    //scanf("%d",&x.ano);
    //printf("duracao do evento");
    //scanf("%d",&duracao_dias);  
      
    data_c = fimEvento(x, duracao_dias);
    mostrar_data(data_c);
    //mostrar_data(data_c);

    return 0;
}
