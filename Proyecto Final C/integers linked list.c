#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
// #include </Users/detach/Documents/C Libraries/C - Prelude.h>
#define LENGTH(array) (sizeof(array) / sizeof(array[0]))

// CUSTOM TYPES -----------------------------------------------------------
typedef struct node_ {
    int data;
    struct node_ *next;
} Node;

typedef struct {
    /* acceso a la lista */
    Node *acc;
    /* cursor de la lista */
    Node *cur;
    /* cursor auxiliar */
    Node *aux;
} List;

// GENERICS

void init(List *l) {
    l->acc = NULL;
    l->aux = NULL;
    l->cur = NULL;
}

_Bool isEmpty (List l) {
    return l.acc == NULL;
}

void isFull(List *l) {
    
}

void reset(List *l) {
    l->cur = l->acc;
}

void isOos(List *l) {
    
}

int copy(List *l) {
    return l->cur->data;
}

void insert(List *l, int x) {
    // Create node
    Node *newNode = malloc(sizeof(Node));
    newNode->data = x;
    
    if (l->acc == NULL) {
        // Empty list case
        l->acc = l->aux = l->cur = newNode;
        l->cur->next = l->aux->next = l->acc->next = NULL;
    } else {
        // Non-Empty list case
        // Link new node with previous node
        newNode->next = l->cur->next;
        l->aux->next = newNode;
    }
}

void  supress (List *l) {
    if (l->acc == l->cur) {
        l->acc = l->cur->next;
        l->aux = l->cur->next;
        l->cur = l->cur->next;
    } else {
        l->aux->next = l->cur->next;
        l->cur = l->aux->next;
    }
}

void forward(List *l) {
    l->aux = l->cur;
    l->cur = l->cur->next;
}

void  displayList (List *l) {
    reset(l);
    while (l->cur != NULL) {
        printf("%d\n", l->cur->data);
        forward(l);
    }
}


// main :: IO ()
int main(void) {
    List l;
    init(&l);
    
    // TEST DATA
    insert(&l, 5);
    insert(&l, 7);
    insert(&l, 10);
    
    // TEST
    // reset(&l);
    // printf("After reset: %d\n", l.cur->data);
    
    // forward(&l);
    printf("-- Print whole list after forward\n");
    displayList(&l);
    
    
    reset(&l);
    forward(&l);
    // printf("After forward: %d\n", l.cur->data);
    supress(&l);
    // printf("After suppress: %d\n", l.cur->data);
    printf("-- Print whole list after suppress \n");
    displayList(&l);
    
    return 0;
}

// GENERIC ----------------------------------------------------------------
