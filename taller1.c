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

  for (int j = 0; j < 5; j++) {
    printf("%s", &nombres[j]);
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {

      printf("%2.f\t", notas[i][j]);
      printf("Estudiante : [%d]nota: [%d] Asignatura[%d]:  ", i + 1, j + 1,j + 1);
      scanf("%lf", &notas[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < 5; i++) {
    double max = 0, min = 10, promedio = 0;
    for (int j = 0; j < 3; j++) {
      if (notas[i][j] > max) {
        max = notas[i][j];
      }
      if (notas[i][j] < min) {
        min = notas[i][j];
      }
      promedio += notas[i][j];
    }
    promedio /= 3;
    printf("promedio es %.2f\n", promedio);
    printf("la nota minima es %.2f \n", min);
    printf("la nota maxima es %.2f \n", max);
}
for (int j = 0; j < 3; j++) {
    double max = 0, min = 10, promedio = 0;
    for (int i = 0; i < 5; i++) {
      if (notas[i][j] > max) {
        max = notas[i][j];
      }
      if (notas[i][j] < min) {
        min = notas[i][j];
      }
      promedio += notas[i][j];
    }
    promedio /= 3;
    printf("promedio de la asignatura es %.2f\n", promedio);
    printf("la nota minima de la asignatura es %.2f \n", min);
    printf("la nota maxima de la asignatura es %.2f \n", max);
}
}