/* Ejemplos de uso de punteros en C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
ejercicio 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejercicio1() {
    int x = 14;
    int *p = &x;
    printf("ejercicio 1: x = %d, *p = %d\n", x, *p);
}

/*
ejercicio 2: Modificar variable usando puntero
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
    printf("ejercicio 2: x = %d\n", x);
}

/*
ejercicio 3: Puntero a array
Se muestra cómo un puntero puede apuntar al primer elemento de un array.
- int arr[3] = {1, 2, 3}; // Array de enteros
- int *p = arr; // Puntero al primer elemento del array
- printf(...) // Se imprime el valor del primer elemento usando el puntero
*/
void ejercicio3() {
    int arr[5] = {12, 24, 35, 44, 57};
    int *p = arr;
    printf("ejercicio 3: Primer elemento = %d\n", *p);
}

/*
ejercicio 4: Recorrer array con puntero
Se recorre un array usando aritmética de punteros.
- int arr[5] = {...}; // Array de 5 enteros
- int *p = arr; // Puntero al primer elemento
- for(...) // Se recorre el array usando *(p + i) para acceder a cada elemento
*/
void ejercicio4() {
    int arr[10] = {12, 24, 35, 44, 56, 65, 72, 88, 90, 99};
    int *p = arr;
    printf("ejercicio 4: Array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
/*
ejercicio 5: Puntero a estructura
Se muestra cómo acceder a los campos de una estructura usando un puntero y el operador ->.
- struct Persona {...}; // Definición de la estructura
- struct Persona p1 = {...}; // Instancia de la estructura
- struct Persona *ptr = &p1; // Puntero a la estructura
- printf(...) // Se accede a los campos usando ptr->campo
*/
struct Persona {
    char nombre[26];
    int edad;
};
void ejercicio5() {
    struct Persona p1 = {"David", 18};
    struct Persona *ptr = &p1;
    printf("ejercicio 5: %s tiene %d años\n", ptr->nombre, ptr->edad);
}

/*
ejercicio 6: Puntero a puntero
Se muestra cómo un puntero puede apuntar a otro puntero.
- int x = 7; // Variable entera
- int *p = &x; // Puntero a x
- int **pp = &p; // Puntero a puntero p
- printf(...) // Se imprime el valor de x, *p y **pp
*/
void ejercicio6() {
    int x = 7;
    int *p = &x;
    int **pp = &p;
    printf("ejercicio 6: x = %d, *p = %d, **pp = %d\n", x, *p, **pp);
}
/*
ejercicio 7: Parámetro por referencia
Se muestra cómo modificar una variable fuera de una función usando un puntero como parámetro.
- void incrementar(int *n) {...} // Función que incrementa el valor apuntado
- int x = 10; // Variable
- incrementar(&x); // Se pasa la dirección de x
- printf(...) // Se imprime el valor modificado
*/
void incrementar(int *n) {
    (*n)++;
}
void ejercicio7() {
    int x = 10;
    incrementar(&x);
    printf("ejercicio 7: x incrementado = %d\n", x);
}
/*
ejercicio 8: Punteros y memoria dinámica
Se muestra cómo reservar memoria dinámica usando malloc y acceder a ella con punteros.
- int *p = malloc(...); // Reserva memoria para 3 enteros
- p[0] = ...; // Asigna valores
- printf(...) // Imprime los valores
- free(p); // Libera la memoria
*/
void ejercicio8() {
    int *p = (int*)malloc(sizeof(int) * 3);
    if (p != NULL) {
        p[0] = 100; p[1] = 200; p[2] = 300;
        printf("ejercicio 8: %d %d %d\n", p[0], p[1], p[2]);
        free(p);
    }
}

/*
ejercicio 9: Array de punteros
Se muestra cómo crear un array cuyos elementos son punteros a char (cadenas).
- char *nombres[3] = {...}; // Array de punteros a cadenas
- for(...) // Se recorre el array e imprime cada cadena
*/
void ejercicio9() {
    char *nombres[3] = {"Ana", "Luis", "Marta"};
    printf("Ejercicio 9: ");
    for(int i = 0; i < 3; i++) {
        printf("%s ", nombres[i]);
    }
    printf("\n");
}

/*
ejercicio 10: Punteros a funciones
Se muestra cómo declarar un puntero a función y usarlo para llamar diferentes funciones.
- int suma(int, int), int resta(int, int); // Funciones
- int (*operacion)(int, int); // Puntero a función
- operacion = suma; // Apunta a suma
- operacion = resta; // Apunta a resta
- printf(...) // Llama la función apuntada
*/
int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
void ejercicio10() {
    int (*operacion)(int, int);
    operacion = suma;
    printf("ejercicio 10: Suma = %d\n", operacion(2, 3));
    operacion = resta;
    printf("ejercicio 10: Resta = %d\n", operacion(5, 2));
}

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    ejercicio10();
    return 0;
}
