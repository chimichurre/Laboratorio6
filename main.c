//Laboratorio #6
//Asbel Mena
//C14647

#include <stdio.h>
#include "stack.h"

int main() {
    Stack* stack = createStack(); //Elaborarando la pila

//Colocando valores en la parte de arriba de la pila
    printf("**Añadiendo descendentemente valores desde la parte superior de la pila**\n");
    push(stack,3);
    printf("Elemento de la parte superior devuelto: %d\n", peek(stack));
    push(stack,4);
    printf("Elemento de la parte superior devuelto: %d\n", peek(stack));
    push(stack,5);
    printf("Elemento de la parte superior devuelto: %d\n", peek(stack));
    push(stack,6);
    printf("Elemento de la parte superior devuelto: %d\n", peek(stack));

//Suprimiendo valores en la pila
    printf("**Removiendo elementos desde la pila**\n");
    printf("Elemento Eliminado: %d\n", pop(stack));
    printf("Nuevo valor en la parte superior: %d\n", peek(stack));
    printf("Elemento Eliminado: %d\n", pop(stack));
    printf("Nuevo valor en la parte superior: %d\n", peek(stack));
    printf("Elemento Eliminado: %d\n", pop(stack));
    printf("Nuevo valor en la parte superior: %d\n", peek(stack));
    printf("Elemento Eliminado: %d\n", pop(stack));

    printf("¿La pila esta vacía? %s\n", isEmpty(stack) ? "Sí" : "No");

//Desvincular la memoriada usada por la pila
    freeStack(stack);
    return 0;
}