#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int somar(int n1,int n2);
int maior_menor(int n1, int n2);
void ordenar(int n1,int n2);
// funcao principal do menu
main(){
       int opc,x1,x2,soma,maior;
       printf("digite os dois numeros\n");
       scanf("%d%d",x1,x2);
       printf("\n por favor digite a sua opcao\n\n");
       printf("1- somar dois numeros\n");
       printf("2 - unificar qual e o mair entre os dois numero\n");
       printf("3- apresentar os dois numeros em ordem crescente\n");
       scanf("%d",& opc);
       //estrutura de controle
       switch(opc)
       {
                 case1:
                       soma=somar(x1,x2);
                       printf("\n a soma de %d e %d e:d%\n",x1,x2,soma);
                       break;
                       case 2:
                            maior =maior_menor (x1,x2);
                            printf("\n o maior numero entre %d e %d e %d\n",x1,x2,maior);
                            case 3:
                                 ordenar(x1,x2);
                                 break;
                                 default:
                                         printf("\n\n opcao invalida!!\n\n");
                                         break;
                                         }
                                         system("pause");
                                         }
                                         //funcao soma
                                         int soma(int n1,int n2)
                                         {
                                             return n1+n2;
                                             }
                                             // funcao maior e menor
                                             int maior_menor (int n1,int n2)
                                             {
                                             if(n1>n2)
                                             {
                                                      return n1;
                                                      }
                                                      else
                                                      {
                                                          return n2;
                                                          }
                                                          }
                                                          void ordenar(int n1,int n2)
                                                           {
                                                               if(n1<n2)
                                                               {
                                                                        printf("%d%d\n",n1,n2);
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("%d%d\n",n1,n2);
                                                                            }
                                                                            } 
                                                                        
