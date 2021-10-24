/**************************************+\
+                                       +
+   Programa Ejercicio_I_3              +
+   (Ver. 1.1)                          +
+                                       +
+   Realizar un programa para imprimir  +
+   un rombo simetrico de asteriscos    +
+   dado el lado del rombo              +
+                                       +
\***************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
  /* constantes y variables */
  const int ladoMaximo = 20; /* Máximo valor para el lado */
  int lado = -1; /* Lado del rombo */

  /* Lee el valor para el lado del rombo */ {
    printf("Lado del rombo?");
    scanf(" %d", &lado);
  }

  /* Sale si el valor del lado es negativo, cero o mayor que el valor máximo */ {
    if ((lado < 1) || (lado > ladoMaximo)) {
      return 0;
    }
  }

  /* Imprime el triángulo */ {
    for (int i = 0; i < 2*lado-1; i++) {

      /* Imprime los espacios */ {
        for (int j = 0; j < abs(lado - i - 1); j++) {
          printf(" ");
        }
      }

      /* Imprime la linea */ {
        printf("*");
        for (int j = 0; j < (lado - abs(lado - i - 1) - 1); j++) {
          printf(" *");
        }
      }

      /* Introduce un salto de linea */ {
        printf("\n");
      }
    }
  }
}
