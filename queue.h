#ifndef _HEADER_TUBES_H
#define _HEADER_TUBES_H

#include <stdio.h>
#include <stdlib.h>


#include "boolean.h"

#define Nil NULL

typedef int ElType;

typedef struct tNode *address;
typedef struct tNode {
    ElType Info;
    address Next;
} Node;

typedef struct {
    address HEAD;
    address TAIL;
} Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).HEAD->Info
#define InfoTail (Q) (Q).TAIL->Info
#define Next(P) (P)->Next
#define Info(P) (P)->Info

void Alokasi(address *P, ElType X);

void Dealokasi(address P);

boolean IsEmpty(Queue Q);

void CreateEmpty(Queue *Q);

void Enqueue(Queue *Q, ElType X);

void Dequeue(Queue *Q, ElType *X);


#endif // _HEADER_TUBES_H
