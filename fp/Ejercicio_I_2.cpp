/**************************************+\
+                                       +
+   Programa Ejercicio_I_2              +
+   (Ver. 1.3)                          +
+                                       +
+   Realizar un programa para calcular  +
+   el máximo común divisor de dos      +
+   números enteros                     +
+                                       +
\***************************************/
#include <stdio.h>
#include <limits.h>

int main() {
  /* Constantes del programa*/
  const int Minimo = 1;  /* Valor mínimo para los numeros */
  const int Maximo = 2147483646; /* Valor máximo para los numeros */
  const int TotalNumeros = 2; /* Total de números a leer */
  const int LongitudTexto = 8; /* Longitud máxima de la cadena */

  /* Declaración de variables */
  int aux = -1; /* Número auxiliar para ordenar los números */
  int resto = -1; /* Número para almacenar el resto */

  /* Declaración de variables para el bucle de lectura */
  typedef char TipoTexto[LongitudTexto]; /* Cadena de texto */
  typedef TipoTexto TipoListaCadenas[TotalNumeros]; /* Array de cadenas */
  typedef int TipoListaEnteros[TotalNumeros]; /* Array de enteros */

  TipoListaCadenas cadenas = { "Primer", "Segundo"}; /* Lista de cadenas para
                                                        las preguntas del bucle */
  TipoListaEnteros numero = { -1, -1}; /* Array que alamacenará los números a leer */

  /* Leer los números */ {
    for (int i=0; i<TotalNumeros; i++) {
      do {
        printf("%s numero? ", cadenas[i]);
        scanf("%d", &numero[i]);
        fflush(stdin);
      } while ((numero[i] < Minimo) || (numero[i] > Maximo));
    }
  }

  /* Ordenar los números de mayor a menor */ {
    if (numero[0] < numero[1]) {
      aux = numero[0];
      numero[0] = numero[1];
      numero[1] = aux;
    }
  }

  /* Calcular el M.C.D. */ {
    while (resto != 0) {
      resto = numero[0] % numero[1];
      numero[0] = numero[1];
      numero[1] = resto;
    }
  }

  /* Imprimir el resultado */ {
    printf("El maximo comun divisor es: %10d\n", numero[0]);
  }
}
