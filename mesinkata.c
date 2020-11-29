#include <stdio.h>
#include <stdlib.h>
#include "mesinkata.h"
#include "mesinkar.h"
#include "matriks.h"

boolean EndKata;
Kata CKata;

void IgnoreBlank() {
/* Mengabaikan satu atau beberapa BLANK
I.S.: CC sembarang
F.S.: CC ≠ BLANK */
/* Kamus Lokal */
/* Algoritma */
    while ((CC == BLANK) || (CC == ENTER)){
        ADV();
    } /* CC != BLANK */
}

void STARTKATA(char *namafile) {
/* I.S.: CC sembarang
F.S.: EndKata = true, dan CC = Mark;
atau EndKata = false, CKata adalah kata yang sudah diakuisisi,
CC karakter pertama sesudah karakter terakhir kata */
/* Kamus Lokal */
/* Algoritma*/
    START(namafile);
    IgnoreBlank();
    SalinKata();
}

void ADVKATA() {
/* I.S.: CC adalah karakter pertama kata yang akan diakuisisi
F.S.: CKata adalah kata terakhir yang sudah diakuisisi,
CC adalah karakter pertama dari kata berikutnya,
mungkin MARK
Proses: Akuisisi kata menggunakan procedure SalinKata */
/* Kamus Lokal */
/* Algoritma*/
    IgnoreBlank();
    SalinKata();
    IgnoreBlank();
}

void SalinKata() {
/* Mengakuisisi kata, menyimpan dalam CKata
I.S.: CC adalah karakter pertama dari kata
F.S.: CKata berisi kata yang sudah diakuisisi;
CC = BLANK atau CC = MARK;
CC adalah karakter sesudah karakter terakhir yang
diakuisisi */
    /* Kamus Lokal */
    int i; /* definisi */
    /* Algoritma*/
    i = 1; /* inisialisasi */
    while ((CC != BLANK) && (CC != ENTER) && (i <= NMax)) {
        CKata.TabKata[i] = CC;
        ADV();
        i++;
    } /* CC = MARK or CC = BLANK */
    CKata.Length = i;
}

void InputCommand(Kata *K){
/* I.S. Sembarang
F.S. menerima masukkan dari user dan menyimpannya di K */
    char c;
    int i = 0;
    scanf("%c", &c);
    while (c != '\n'){
        (*K).TabKata[i] = c;
        ++i;
        scanf("%c", &c);
    }
    (*K).Length = i;
}

void PrintKata (Kata K){
/* I.S. Kata K terdefinisi
F.S. K tercetak di layar */
    int i = 0;
    while (i<K.Length){
        printf("%c", K.TabKata[i]);
        i++;
    }
}

boolean IsKataSama (Kata K1, Kata K2){
/* Mengeluarkan true jika K1 sama dengan K2 */
    int i = 0;
    boolean sama = true;

    if(K1.Length != K2.Length){
        return false;
    } else {
        i = 0;
        while ((sama) && (i < K1.Length)){
            sama = (K1.TabKata[i] == K2.TabKata[i]);
            i++;
        }
        return sama;
    }
}

void CreateKata(char c[], Kata *K){
/* I.S. string c[] terdefinisi
F.S. mengonversi bentuk string menjadi kata K */
    int i = 0;
    while (c[i] != '\0'){
        (*K).TabKata[i] = c[i];
        ++i;
    }
    (*K).Length = i;
}

MATRIKS KataToMatriks(int Baris, int Kolom){
/*Membaca kata menjadi matriks*/
    MATRIKS M;
    MakeMATRIKS(Baris, Kolom, &M);
    BacaMATRIKS(&M, Baris, Kolom);
    return M;
}

int KataToInt (Kata K){
/* konversi kata menjadi integer*/
    int value = 0;
    int i = 0;
    while (i<K.Length){
        value = value * 10;
        switch (K.TabKata[i])
        {
        case '0': value = value + 0; break;
        case '1': value = value + 1; break;
        case '2': value = value + 2; break;
        case '3': value = value + 3; break;
        case '4': value = value + 4; break;
        case '5': value = value + 5; break;
        case '6': value = value + 6; break;
        case '7': value = value + 7; break;
        case '8': value = value + 8; break;
        case '9': value = value + 9; break;
        };
        i++;
    }
    return value;
}

char KataToChar (Kata K)
/* K.Length = 1 , mengeluarkan konversi K ke char */
{
    return (K.TabKata[0]);
}