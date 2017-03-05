#include<stdio.h>
#include<stdlib.h>

main()
{
int valor[10], i,soma2=0,soma=0, cont=0;
for(i=0;i<=7;i=i+1)
{
printf("\nDigite um valor: ");
scanf("%d,&valor[i]");

if(valor[i]>22 && valor[i]<63)
{                
cont++;
soma=soma+valor[i];
}
}
for(i=0;i<=7;i=i+1)
printf("\t%d",valor[i]);
printf("\n\n %d numeros maior que 22",cont);
printf("\n\n a soma dos numeros maiores que 22 e menores que 63 =%d",soma);
printf("\n\n %d numeros menor que 63",cont);
printf("\n\n a soma dos numeros menores que 63 e =%d",soma);
for(i=0;i<=7;i++)
soma2=soma2+valor[i];
printf("\n\n a soma dos numeros digitados e = %d",soma2);
printf("\n\n");
system("pause");
}                           
                         
