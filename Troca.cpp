#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int A[]={3,2,4,6,8};
       int B[]={7,1,9,0,3};
       int C[5];
       int D[]={1,5,9,8,6};
       int E[]={69,82,56,14,63};
       int F[5];
   int i;    
       printf("valores originais:");
       for(int i=0;i<5;i=i+1)
       {
                         printf("\n A[%d]=%d",i,A[i]);
                         printf("\n B[%d]=%d",i,B[i]);
                         printf("\n D[%d]=%d",i,D[i]);
                         printf("\n E[%d]=%d",i,E[i]);
                         }
                         for(i=0;i<=5;i=i+1)
                         {
                                            C[i]=A[i];
                                            A[i]=B[i];
                                            B[i]=C[i];
                                            F[i]=E[i];
                                            E[i]=D[i];
                                            D[i]=F[i];
                                            }
                                            printf("\n\n valores trocados:");
                                            for(int i=0;i<5;i=i+1)
       {
                         printf("\n A[%d]=%d",i,A[i]);
                         printf("\n B[%d]=%d",i,B[i]);
                         printf("\n D[%d]=%d",i,D[i]);
                         printf("\n E[%d]=%d",i,E[i]);
                         }
                          printf("\n\n\n.....FIM.....");
                          system("pause");
                          getch();
                          }
                         
