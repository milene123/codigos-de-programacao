#include<stdio.h>
#include<conio.h>

void subtracao(int a, int b, int c)
{
     int k;
     k= a-b-c;
     printf("\na subtracao e %d", k);
     }
 void soma(int a, int b, int c)
{
     int k;
     k= a+b+c;
     printf("\n a soma e %d", k);
     }
     void divisao(int a, int b, int c)
{
     int k;
     k= a/b/c;
     printf("\n a divisao e %d", k);
     }
     void multiplicacao(int a, int b, int c)
{
     int k;
     k= a*b*c;
     printf("a multipicacao e %d", k);
     }
         
     
     
            main(){
            int n1, n2, n3;
            printf("digite um numero,");
            scanf("%d", & n1);
            printf("digite um numero,");
            scanf("%d", & n2);
            printf("digite um numero,");
            scanf("%d", & n3);
            subtracao(n1, n2, n3);
            soma(n1, n2, n3);
            divisao(n1, n2, n3);
            multiplicacao(n1, n2, n3);
            getch();
            }
