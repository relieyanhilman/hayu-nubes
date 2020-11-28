#include <stdio.h>
#include "boolean.h"
#include "point.h"

/* *** Notasi Akses: Selektor POINT *** */
#define Absis(P) (P).X
#define Ordinat(P) (P).Y

/* *** DEFINISI PROTOTIPE PRIMITIF *** */
/* *** Konstruktor membentuk POINT *** */
POINT MakePOINT (int X, int Y)
/* Membentuk sebuah POINT dari komponen-komponennya */
{
    POINT P;
    Absis(P) = X; 
    Ordinat(P) = Y; 
    return P; 
}

/* *** KELOMPOK Interaksi dengan I/O device, BACA/TULIS  *** */                                                 
void BacaPOINT (POINT * P) {
    int X, Y; 
    scanf("%d, %d", &X, &Y);
    *P = MakePOINT(X,Y); 
}
/* Membaca nilai absis dan ordinat dari keyboard dan membentuk 
   POINT P berdasarkan dari nilai absis dan ordinat tersebut */
/* Komponen X dan Y dibaca dalam 1 baris, dipisahkan 1 buah spasi */
/* Contoh: 1 2 
   akan membentuk POINT <1,2> */
/* I.S. Sembarang */
/* F.S. P terdefinisi */


void TulisPOINT (POINT P) {
    printf("(%d,%d)",Absis(P),Ordinat(P)); 
}
/* Nilai P ditulis ke layar dengan format "(X,Y)" 
   tanpa spasi, enter, atau karakter lain di depan, belakang, 
   atau di antaranya */
/* I.S. P terdefinisi */
/* F.S. P tertulis di layar dengan format "(X,Y)" */                

/* *** Kelompok operasi relasional terhadap POINT *** */
boolean EQ (POINT P1, POINT P2) {
    return (Absis(P1)==Absis(P2) && Ordinat(P1)==Ordinat(P2));
}
/* Mengirimkan true jika P1 = P2 : absis dan ordinatnya sama */

boolean NEQ (POINT P1, POINT P2) {
    return (Absis(P1)!=Absis(P2) && Ordinat(P1)!=Ordinat(P2));
}
/* Mengirimkan true jika P1 tidak sama dengan P2 */