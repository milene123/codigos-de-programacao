#include<stdio.h>
#include<conio.h>
#stdio<stdlib.h>
main() {
       int x,vet[8],num,achei=0;
       for(x=0;x<8;x=x+1)
       {
                          printf("\n[%d]digite um numero: ",x);
                          scanf("%d",&vet[x]);
                          }
                          printf("\n\n");
                          printf("Digite um valor a ser pesquisado: ");
                          scanf("%d",&num);
                          for(x=0;x<8;x=x+1)
                          if(vet[x]==num)
                          {
                                         printf("\n O numero %d esta na posiçao",num,x);
                                         }
                                         if(achei=1)
                                         printf("\n este numero nao existe\n");
                                         system("pause");
                                         }
