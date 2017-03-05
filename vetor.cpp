#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int x,vet[8],num,achei=0;
       for(x=0;x<8;x=x+1)
       {
         printf("\n[%d]digite um numero: ",x);
         scanf("%d",&vet[x]);
         }
         printf("\n\n");
         printf("digite um valor a ser pesquisado: ");
         scanf("%d",& num);
         for(x=0;x<8;x=x+1)
         if(vet[x]==num)
         {
                        printf("\n o numero %d esta na posicao% d: ",num,x);
                        achei=l
                        }
                        if(achei!=1)
                        printf("\neste numero nao existe \n");
                        system("pause");
                        }
