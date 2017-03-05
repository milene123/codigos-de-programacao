






#include<stdio.h>
#include<stdlib.h>

/*****PROTÓTIPOS DAS FUNÇÕES*****/

int somar(int n1, int n2);
int maior_menor(int n1, int n2);
void ordenar(int n1, int n2);
int menor_maior (int n1,int n2);
int multiplicar(int n1, int n2);
void tabuada(int n1, int n2);
void par_impar (int n1,int n2);

/*****FUNÇÃO PRINCIPAL COM MENU*****/
main()
 {
  int opc,x1,x2,soma,maior,menor,mult;
  printf("Digite os dois numeros\n");
  scanf("%d%d",&x1,&x2);
  printf("\nPor favor digite a sua opcao\n\n");
  printf("1 - Somar dois numeros\n");
  printf("2 - Verificar qual e o maior entre os dois numeros\n");
  printf("3 - Apresentar os dois numeros em ordem crescente\n");
  printf("4 - Verificar qual e o menor entre os dois numeros\n");
  printf("5 - multiplicar dois numeros\n");
  printf("6 -calcular  tabuada dos numeros\n");
  printf("7 - par ou impar\n");
  scanf("%d",&opc);
  
/***** ESTRUTURA DE CONTROLE - MENU*****/  
  
  switch (opc)
  {
   case 1:
   soma=somar(x1,x2);
   printf("\nA soma de %d + %d eh: %d\n",x1,x2,soma);
   break;  
   
   case 2:
   maior=maior_menor(x1,x2);
   printf("\nO maior entre %d e %d eh: %d\n",x1,x2,maior);
   break; 
   
   case 3:
   ordenar(x1,x2);
   break; 
   
   
   case 4:
  menor=menor_maior(x1,x2);
   printf("\nO menor entre %d e %d eh: %d\n",x1,x2,menor);
   break; 
   
   case 5:
   mult=multiplicar(x1,x2);
   printf("\nA multiplicacao de %d * %d eh: %d\n",x1,x2,mult);
   break;  
        
   case 6:
  tabuada(x1,x2);
 
   break;  
   case 7:
   par_impar(x1,x2);
   break; 
    
   default:
   printf("\n\nOpcao invalida!!!\n\n");
   break;       
  }      
  system("pause");
 }

/*****FUNÇÃO SOMAR*****/ 
 
int somar(int n1, int n2)
{
 return n1+n2;    
}

/*****FUNÇÃO MAIOR*****/ 

int maior_menor(int n1, int n2)
{
    if (n1>n2)
     {
      return n1;
     }
    else
     {
      return n2;
     }
}

/*****FUNÇÃO ORDENAR*****/ 

void ordenar(int n1, int n2)
{
 if (n1<n2)
  {
   printf("%d %d\n", n1,n2);
  }
 else
  {
   printf("%d %d\n", n2,n1);
  }
}
/****funcao menor*****/
int menor_maior(int n1, int n2)
{
    if (n1<n2)
     {
      return n1;
     }
    else
     {
      return n2;
     }
}
/*funcao multiplicar*/
int multiplicar(int n1, int n2)
{
 return n1*n2;    
}

/*funcao tabuada*/
void tabuada(int n1, int n2)
{
int i;
{
for(i=1;i<=10;i=i+1)
printf("\n %d*%d=%d",n1,1,(n1*1));
}

for(i=1;i<=10;i=i+1)
printf("\n %d*%d=%d",n2,1,(n2*1));

}

/**funcao par ou impar**/
void par_impar (int n1,int n2)
{
if(n1%2 ==0)
printf("\n o numero %d e par\n",n1);
else
printf("\n o numero %d e impar\n",n1);

if(n2%2 ==0)
printf("\n o numero %d e par\n",n2);
else
printf("\n o numero %d e impar\n",n2);



}
