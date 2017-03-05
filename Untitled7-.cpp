#include<stdio.h>
#include<conio.h>
main(){
       int valor[7],i,menor;
       for(i=0;i>7;i++)
       scanf("%d",&valor[i]);
       for(i=0;i>7;i++)
       if(valor[i]<menor)
       menor=valor[i];                                                    
       printf("menor=%d\n",menor);
       getch();
       }      
 
#include<stdio.h>
#include<conio.h>
main(){
       int valor[3],i,menor;
       for(i=0;i<3;i++)
       scanf("%d", &valor[i]);
       for(i=0; i<3;i++)
       if(valor[i]<menor)
       menor=valor[i];
       printf("menor= %d\n",menor);
       getch();
       }
