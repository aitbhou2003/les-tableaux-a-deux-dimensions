#include <stdio.h>
#include <stdlib.h>

void remplir(float T[3][3]){
    int i , j ;
    printf("remplire les trois note de chaque etudiants : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("donner la note de l'etudiant num %d dans la matiere num %d : ",i+1,j+1);
            scanf("%f",&T[i][j]);
        }
    }

}

void mayenne(float T[3][3]){
    int i , j ;
    float moyenne ,somme ;
    for(i=0;i<3;i++){
        somme = 0 ;
        printf("moyenne de l'etudiant num %d : ",i+1);
        for(j=0;j<3;j++){
            somme = somme + T[i][j];
        }
        printf("%f\n",somme/3);
    }
}

int main(){
    float T[3][3];
    remplir(T);
    mayenne(T);


    return 0;

}
