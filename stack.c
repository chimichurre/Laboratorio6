#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//Establecer la lista
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

//Añade un elemento a la parte superior de la pila
void push(Stack* stack, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = stack->top;
    newNode->prev = NULL;
    if (stack->top != NULL) {
        stack->top->prev = newNode;
    }
    stack->top = newNode;
}

//Suprime un elemento desde la pila
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("El stack se encuentra vacío.\n");
        return -1;
    }
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    if (stack->top != NULL) {
        stack->top->prev = NULL;
    }
    free(temp);
    return data;
}

// Devuelve el elemento en la parte superior de la pila sin eliminarlo
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("El Stack se encuentra vacío.\n");
        return -1;
    }
    return stack->top->data;
}

// CONSTATAR si la pila está vacía
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

//Liberar la pila
void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}