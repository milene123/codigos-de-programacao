#include<stdio.h>
#include<conio.h>
main(){
       float notas[5];
       float soma=0,media;
       int i;
       for(i=0;i<5;i=i+1)
       {
                         printf("Digite as suas notas: ");
                         scanf("%f",&notas[i]);
                         soma=soma+notas[i];
                         }
                         media=soma/5;
                         printf("A sua media foi %2.2f",media);
                         if(media>=7)
                         printf("Aprovado com media %2.2f",media);
                         else
                         printf("Reprovado com media %2.2f",media);
                         getch();
                         
