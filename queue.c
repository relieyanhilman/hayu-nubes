#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

void Alokasi(address *P, ElType X){
    *P = (address) malloc(sizeof(Node));
    Info(*P) = X;
    Next(*P) = Nil;
}

void Dealokasi(address P){
    free(P);
}

boolean IsEmpty(Queue Q){
    return ((Head(Q) == Nil) && (Tail(Q) == Nil));
}

void CreateEmpty(Queue *Q){
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void Enqueue(Queue *Q, ElType X){
    address P;
    Alokasi (&P,X);
    if (P!=Nil){
        if (IsEmpty(*Q)){
            Head(*Q) = P;
        } else {
            Next(Tail(*Q)) = P;
        }
        Tail(*Q) = P;
    }
}

void Dequeue(Queue *Q, ElType *X){
    address P;
    *X = InfoHead(*Q);
    P = Head(*Q);
    Head(*Q) = Next(Head(*Q));
    if (Head(*Q) == Nil) {
        Tail(*Q) = Nil;
    }
    Next(P) = Nil;
    Dealokasi(P);
}

