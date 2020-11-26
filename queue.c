#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

void Alokasi(address *P, ElTypeQ X){
    *P = (address) malloc(sizeof(Node));
    InfoQ(*P) = X;
    NextQ(*P) = Nil;
}

void DealokasiQ(address P){
    free(P);
}

boolean IsEmptyQ(Queue Q){
    return ((Head(Q) == Nil) && (Tail(Q) == Nil));
}

void CreateEmpty(Queue *Q){
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void Enqueue(Queue *Q, ElTypeQ X){
    address P;
    Alokasi (&P,X);
    if (P!=Nil){
        if (IsEmptyQ(*Q)){
            Head(*Q) = P;
        } else {
            NextQ(Tail(*Q)) = P;
        }
        Tail(*Q) = P;
    }
}

void Dequeue(Queue *Q, ElTypeQ *X){
    address P;
    *X = InfoHead(*Q);
    P = Head(*Q);
    Head(*Q) = NextQ(Head(*Q));
    if (Head(*Q) == Nil) {
        Tail(*Q) = Nil;
    }
    NextQ(P) = Nil;
    DealokasiQ(P);
}

