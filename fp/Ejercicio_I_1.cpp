/**************************************\
+                                      +
+   Programa Ejercicio_I_1             +
+   (Ver. 1.2)                         +
+                                      +
+   Imprime la tabla de multiplicar    +
+   por un número leído como dato      +
+                                      +
\**************************************/
#include <stdio.h>

int main() {
  /* Constantes del programa */
  const int minimo = 1;  /* Valor mínimo para la tabla */
  const int maximo = 10; /* Valor máximo para la tabla */

  /* Declaración de variables */
  int numero = -1; /* Número a leer inicializado a -1 */

  /* Leer el número */ {
    do {
      printf("Numero? ");
      scanf("%d", &numero);
    } while ((numero < minimo) || (numero > maximo));
  }

  /* Imprimir la cabecera */ {
    printf("\nTabla de multiplicar por %d\n", numero);
    printf("===========================\n");
  }

  /* Imprimir la tabla de multiplicar */ {
    for (int i = minimo; i <= maximo; i++) {
      printf("%6d  x %2d = %3d\n", numero, i, numero*i);
    }
  }
}
