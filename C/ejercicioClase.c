/* Ejemplos de uso de punteros en C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejemplo 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejercicio1() {
    int x = 14;
    int *p = &x;
    printf("Ejemplo 1: x = %d, *p = %d\n", x, *p);
}

/*
Ejemplo 2: Modificar variable usando puntero
Se muestra cómo modificar el valor de una variable a través de su puntero.
- int x = 10; // Variable entera
- int *p = &x; // Puntero a x
- *p = 20; // Se modifica el valor de x usando el puntero
- printf(...) // Se imprime el nuevo valor de x
*/
void ejercicio2() {
    int x = 14;
    int *p = &x;
    *p = 24;
    printf("Ejemplo 2: x = %d\n", x);
}

/*
Ejemplo 3: Puntero a array
Se muestra cómo un puntero puede apuntar al primer elemento de un array.
- int arr[3] = {1, 2, 3}; // Array de enteros
- int *p = arr; // Puntero al primer elemento del array
- printf(...) // Se imprime el valor del primer elemento usando el puntero
*/
void ejercicio3() {
    int arr[5] = {12, 24, 35, 44, 57};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %d\n", *p);
}

/*
Ejemplo 4: Recorrer array con puntero
Se recorre un array usando aritmética de punteros.
- int arr[5] = {...}; // Array de 5 enteros
- int *p = arr; // Puntero al primer elemento
- for(...) // Se recorre el array usando *(p + i) para acceder a cada elemento
*/
void ejercicio4() {
    int arr[10] = {12, 24, 35, 44, 56, 65, 72, 88, 90, 99};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    return 0;
}
