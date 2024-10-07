#include <stdio.h>
int main() {
  char asignaturas[3][20] = {"Programacion", "Matematicas", "Fisica"};
  char nombres[5][20];
  double notas[5][3];

  for (int i = 0; i < 5; i++) {
    printf("ingrese nombre %d: ", i + 1);
    fflush(stdin);
    fgets(nombres[i], 20, stdin);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Estudiante : [%d]nota: [%d] Asignatura[%d]:  ", i + 1, j + 1,
             j + 1);
      scanf("%lf", &notas[i][j]);
      if (notas[i][j] > 10 || notas[i][j] < 0) {
        printf("nota ingresada inválida, ingrese una nota válida\n");
        printf("ingrese una nota entre 1 y 10\n");
        printf("no ingresar letras ni caracteres\n");
        printf("el programa se dañará se hace esto\n");
        j--;
      } else
        printf("\n");
    }
  }
  for (int i = 0; i < 5; i++) {
    double max = 0, min = 10, promedio = 0;
    printf("Resultados para el estudiante: %s\n", nombres[i]);

    for (int j = 0; j < 3; j++) {
      if (notas[i][j] >= 7) {
        printf("Asignatura: %s - Nota: %.2f - Estado: Aprobado\n",
               asignaturas[j], notas[i][j]);
      } else {
        printf("Asignatura: %s - Nota: %.2f - Estado: Reprobado\n",
               asignaturas[j], notas[i][j]);
      }
      if (notas[i][j] > max) {
        max = notas[i][j];
      }
      if (notas[i][j] < min) {
        min = notas[i][j];
      }
      promedio += notas[i][j];
    }

    promedio /= 3;
    if (promedio >= 7) {
      printf("Promedio: %.2f - Promedio General: Aprobado\n", promedio);
    } else {
      printf("Promedio: %.2f - Promedio General: Reprobado\n", promedio);
    }
    printf("Nota mínima: %.2f\n", min);
    printf("Nota máxima: %.2f\n", max);
    printf("-------------------------------\n");
  }

  for (int j = 0; j < 3; j++) {
    double max = 0, min = 10, promedio = 0;
    printf("Resultados de la asignatura: %s\n", asignaturas[j]);
    for (int i = 0; i < 5; i++) {
      if (notas[i][j] > max) {
        max = notas[i][j];
      }
      if (notas[i][j] < min) {
        min = notas[i][j];
      }
      promedio += notas[i][j];
    }
    promedio /= 5;
    printf("promedio de la asignatura es %.2f\n", promedio);
    printf("la nota minima de la asignatura es %.2f \n", min);
    printf("la nota maxima de la asignatura es %.2f \n", max);
    printf("-------------------------------\n");
  }
}
