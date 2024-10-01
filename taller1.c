#include<stdio.h>

int main(int argc, char *argv[]){
    char nombres[5][20];
    double notas [5][3];
    for (int i = 0; i < 5; i++)
    {
       printf("ingrese el nombre %d: ",i+1);
       fflush(stdin);
       fgets(nombres[i],20,stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("notas[%d][%d]: ",i,j);
            scanf("%f",&notas[i][j]);
        }
        printf("\n");
    }
}