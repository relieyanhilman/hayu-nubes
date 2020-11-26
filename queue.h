#ifndef _HEADER_TUBES_H
#define _HEADER_TUBES_H

#include <stdio.h>
#include <stdlib.h>


#include "boolean.h"

#define Nil NULL

typedef int ElTypeQ;

typedef struct tNode *address;
typedef struct tNode {
    ElTypeQ InfoQ;
    address NextQ;
} Node;

typedef struct {
    address HEAD;
    address TAIL;
} Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).HEAD->InfoQ
#define InfoTail(Q) (Q).TAIL->InfoQ
#define NextQ(P) (P)->NextQ
#define InfoQ(P) (P)->InfoQ

void AlokasiQ(address *P, ElTypeQ X);

void DealokasiQ(address P);

boolean IsEmptyQ(Queue Q);

void CreateEmpty(Queue *Q);

void Enqueue(Queue *Q, ElTypeQ X);

void Dequeue(Queue *Q, ElTypeQ *X);


#endif // _HEADER_TUBES_H
