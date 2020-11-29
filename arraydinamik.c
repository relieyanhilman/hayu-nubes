#include<stdlib.h>
#include<stdio.h>
#include "arraydinamik.h"


/* Konstruktor : create tabel kosong  */
void MakeEmpty(TabInt *T, int maxel){
    TI(*T) = (ElTypeArray *)malloc((maxel+1) * sizeof(ElTypeArray));
    Neff(*T) = 0;
    MaxEl(*T) = maxel;
}
/* I.S. T sembarang, maxel > 0 */
/* F.S. Terbentuk tabel T kosong dengan kapasitas maxel + 1 */

void Dealokasi(TabInt *T){
    free(TI(*T));
    Neff(*T) = 0;
    MaxEl(*T) = 0;
}
/* I.S. T terdefinisi; */
/* F.S. TI(T) dikembalikan ke system, MaxEl(T)=0; Neff(T)=0 */

/* ********** SELEKTOR (TAMBAHAN) ********** */
/* *** Banyaknya elemen *** */
int NbElmt(TabInt T){
    return Neff(T);
}
/* Mengirimkan banyaknya elemen efektif tabel */
/* Mengirimkan nol jika tabel kosong */
/* *** Daya tampung container *** */
int MaxElement(TabInt T){
    return MaxEl(T);
}
/* Mengirimkan maksimum elemen yang dapat ditampung oleh tabel */
/* *** Selektor INDEKS *** */
IdxType GetFirstIdx(TabInt T){
    return IdxMin;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T pertama */
IdxType GetLastIdx(TabInt T){
    return NbElmt(T) - GetFirstIdx(T) + 1;
}
/* Prekondisi : Tabel T tidak kosong */
/* Mengirimkan indeks elemen T terakhir */

/* ********** Test Indeks yang valid ********** */
boolean IsIdxValidArray(TabInt T, IdxType i){
    return ((i>=IdxMin) && (i<=MaxEl(T)));
}
/* Mengirimkan true jika i adalah indeks yang valid utk ukuran tabel */
/* yaitu antara indeks yang terdefinisi utk container*/
boolean IsIdxEff(TabInt T, IdxType i){
    return ((i>=GetFirstIdx(T)) && (i<= GetLastIdx(T)));
}
/* Mengirimkan true jika i adalah indeks yang terdefinisi utk tabel */
/* yaitu antara FirstIdx(T)..LastIdx(T) */

/* ********** TEST KOSONG/PENUH ********** */
/* *** Test tabel kosong *** */
boolean IsEmptyArray(TabInt T){
    return (Neff(T)==0);
}
/* Mengirimkan true jika tabel T kosong, mengirimkan false jika tidak */
/* *** Test tabel penuh *** */
boolean IsFullArray(TabInt T){
    return(Neff(T)==MaxEl(T)-IdxMin+1);
}
/* Mengirimkan true jika tabel T penuh, mengirimkan false jika tidak */

/* ********** BACA dan TULIS dengan INPUT/OUTPUT device ********** */
/* *** Mendefinisikan isi tabel dari pembacaan *** */
void BacaIsi(TabInt *T){
    int N;
    ElTypeArray inp;
    //
    do
    {
        scanf("%d", &N);
    } while (!((N >= 0) && (N <= MaxElement(*T))));
    //
    if (N == 0)
    {
        MakeEmpty(T, MaxEl(*T));
    }
    else
    {
        MakeEmpty(T, MaxEl(*T));
        Neff(*T) = N;
        for (IdxType i = GetFirstIdx(*T); i <= GetLastIdx(*T); i++)
        {
            scanf("%d",&inp);
            ElmtArray(*T,i) = inp;
        }
    }
}
/* I.S. T sembarang dan sudah dialokasikan sebelumnya */
/* F.S. Tabel T terdefinisi */
/* Proses : membaca banyaknya elemen T dan mengisi nilainya */
/* 1. Baca banyaknya elemen diakhiri enter, misalnya N */
/*    Pembacaan diulangi sampai didapat N yang benar yaitu 0 <= N <= MaxElement(T) */
/*    Jika N tidak valid, tidak diberikan pesan kesalahan */
/* 2. Jika 0 < N <= MaxElement(T); Lakukan N kali: Baca elemen mulai dari indeks
      IdxMin satu per satu diakhiri enter */
/*    Jika N = 0; hanya terbentuk T kosong */
void TulisIsiTab(TabInt T){
    if (IsEmpty(T)){
        printf("[]");
    }
    else{
        for (IdxType i = GetFirstIdx(T); i <= GetLastIdx(T); i++){
            printf("%d", ElmtArray(T, i));
            printf(" ");
        }
    }
}
/* Proses : Menuliskan isi tabel dengan traversal, tabel ditulis di antara kurung siku;
   antara dua elemen dipisahkan dengan separator "koma", tanpa tambahan karakter di depan,
   di tengah, atau di belakang, termasuk spasi dan enter */
/* I.S. T boleh kosong */
/* F.S. Jika T tidak kosong: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika tabel kosong : menulis [] */

