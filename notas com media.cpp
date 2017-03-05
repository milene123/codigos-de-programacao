#include<stdio.h>
#include<conio.h>
int main(){
       float notas[5];
       float soma=0,media;
       int i;
       for(i=0;i<5;i=i+1)
       {
                         printf("digite as suas notas ");
                         scanf("%f",& notas[i]);
                         soma=soma+notas[i];
                         }
                         media=soma/5;
                         if(media >7)
                         printf("voce foi aprovado com media %2.2f", media);
                         else
                         printf("voce foi reprovado com media %2.2f", media);
                         getch ();
                         }
                         
