#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int i;
       int A[]={9,5,2,4,8};
       int B[]={1,0,5,8,7};
       int C[5];
       int D[]={4,5,6,3,2};
       int E[]={5,6,9,8,7};
       int F[5];
       printf("valores originais: ");
       for(i=0;i<=4;i=i+1)
       {
                          printf("\n A[%d]= %d-",i, A[i]);
                          printf("\n B[%d]= %d-",i, B[i]);
                          printf("\n D[%d]= %d-",i, D[i]);
                          printf("\n E[%d]= %d-",i, E[i]);
                          }
                          for(i=0;i<=4;i=i+1)
                          {
                          C[i]=A[i];
                          A[i]=B[i];
                          B[i]=C[i];
                          F[i]=D[i];
                          D[i]=E[i];
                          E[i]=F[i];
                          }
                          printf("\n\n valores trocados");
                          for(i=0;i<=4;i=i+1)
                          {
                                             printf("\n A[%d]= %d-",i, A[i]);
                                             printf("\n B[%d]= %d-",i, B[i]);
                                             printf("\n D[%d]= %d-",i, D[i]);
                                             printf("\n E[%d]= %d-",i, E[i]);
                                             
                                             }
                                             printf("\n\n\n ..............fim..............");
                                             system("pause");
                                             }
       
