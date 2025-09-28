#include <stdio.h>
#include <stdlib.h>

void remplir(int T[4][5]){
    int i , j ;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("T[%d][%d] = ",i+1,j+1);
            scanf("%d",&T[i][j]);
        }
    }
}

void affichage(int T[4][5]){
    int i , j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
                printf("%d\t",T[i][j]);
        }
        printf("\n");
    }

}

void somme_A_B(int A[4][5], int B[4][5]){
    int i , j ;
    int C[4][5];
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }     
    affichage(C);

}

 

int main(){
    int A[4][5], B[4][5], C[4][5] ;
    printf("remplire A : \n");
    remplir(A);
    printf("A : \n");
    affichage(A);
    printf("remplire B : \n");
    remplir(B);
    printf("B : \n");
    affichage(B);
    printf("C : \n");
    somme_A_B(A,B);



    return 0;

}
