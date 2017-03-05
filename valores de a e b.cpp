#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
       int i;
       int A[]={9,5,2,4,8};
       int B[]={1,0,5,8,7};
       int C[5];
       printf("valores originais: ");
       for(i=0;i<=4;i=i+1)
       {
                          printf("\n A[%d]= %d-",i, A[i]);
                          printf("\n B[%d]= %d-",i, B[i]);
                          }
                          for(i=0;i<=4;i=i+1)
                          {
                          C[i]=A[i];
                          A[i]=B[i];
                          B[i]=C[i];
                          }
                          printf("\n\n valores trocados");
                          for(i=0;i<=4;i=i+1)
                          {
                                             printf("\n A[%d]= %d-",i, A[i]);
                                             printf("\n B[%d]= %d-",i, B[i]);
                                             }
                                             printf("\n\n\n ..............fim..............");
                                             system("pause");
                                             }
       
