/* File : graph.h */
/* Definisi ADT Graph */
/* Menggunakan representai multilist */

#ifndef graf_H
#define graf_H

#include "boolean.h"
#define Nil NULL

typedef int infograph;

typedef struct tNodeGraph* adrNode;

typedef struct tSuccNode* adrSuccNode;

typedef struct tNodeGraph{
    infograph Id;
    adrSuccNode Trail;
    adrNode NextG;
} NodeGraph;

typedef struct tSuccNode{
    infograph Id;
    adrNode Succ;
    adrSuccNode NextG;
} SuccNode;

typedef struct{
    adrNode FirstG;
} Graph;


/* *** Selektor *** */
#define FirstG(G) (G).FirstG
#define Id(Pn) (Pn)->Id
#define Trail(Pn) (Pn)->Trail
#define Succ(Pn) (Pn)->Succ
#define NPred(Pn) (Pn)->NPred
#define NextG(Pn) (Pn)->NextG

/* *** Konstruktor *** */
void CreateGraph(infograph X, Graph* G);
/* I.S. Sembarang ; F.S. Terbentuk Graph dengan satu simpul dengan Id=X */

void CreateEmptyGraph(Graph *G);

/* *** Manajemen Memory List Simpul (Leader) *** */
adrNode AlokNodeGraph(infograph X); 
/* Mengembalikan address hasil alokasi Simpul X .
 Jika alokasi berhasil, maka address tidak Nil, misalnya
 menghasilkan P, maka Id X, 
 Npred(P)=0, Trail(P)=Nil,
 dan NextG(P)=Nil. Jika alokasi
 gagal, mengembalikan Nil. */

void DeAlokNodeGraph(adrNode P);
/* I.S. P terdefinisi F.S. P dikembalikan ke sistem */

adrSuccNode AlokSuccNode(adrNode Pn);
/*  Mengembalikan address hasil alokasi.
 Jika alokasi berhasil, maka address tidak Nil, misalnya
 menghasilkan Pt, maka Succ (Pt)=Pn dan NextG(Pt)=Nil. 
 Jika alokasi gagal, mengembalikan Nil. */

void DealokSuccNode(adrSuccNode P);
/* I.S. P terdefinisi F.S. P dikembalikan ke sistem */

boolean IsEmptyGraph (Graph G);
/*Mengembalikan true jika Graph G kosong, dan false jika tidak*/

/*  *** Fungsi/Prosedur Lain ***  */
adrNode SearchNode(Graph G, infograph X);
/* Mengembalikan address simpul dengan Id=X jika sudah ada pada graph G,
 Nil jika belum */

adrSuccNode SearchEdge(Graph G, infograph prec, infograph succ); 
/*  Mengembalikan address trailer yang menyimpan info busur (prec,succ)
 jika sudah ada pada graph G, Nil jika belum */

void InsertNode(Graph* G, infograph X, adrNode* Pn);
/* Menambahkan simpul X ke dalam graph, jika alokasi X berhasil.
 I.S. G terdefinisi, X terdefinisi dan belum ada pada G.
 F.S. Jika alokasi berhasil, X menjadi elemen
 terakhir G, Pn berisi address simpul X. Jika alokasi gagal, G tetap, Pn berisi Nil */

void InsertEdge(Graph* G, infograph prec, infograph succ);
/*  Menambahkan busur dari prec menuju succ ke dalam G 
 I.S. G, prec, succ terdefinisi.
 F.S. Jika belum ada busur (prec,succ) di G, maka tambahkan busur
  (prec,succ) ke G. Jika simpul prec/succ belum ada pada G,
  tambahkan simpul tersebut dahulu. Jika sudah ada busur (prec,succ)
  di G, maka G tetap. */

void AddNodeGraph (Graph *G, int X);
/*I.S. Graph G terdefinisi*/
/*F.S. Elemen node dimasukkan secara terurut*/

/* *** Lain-Lain *** */

void Connect(Graph *G, infograph N1, infograph N2);
/* Menyambungkan N1 dan N2 */

boolean isConnected (Graph G, infograph N1, infograph N2);
/* Mengembalikan apakah N1 dan N2 terhubung */

#endif