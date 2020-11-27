/* File: mesinkata.h */
/* Definisi Mesin Kata: Model Akuisisi Versi I */

#ifndef __MESINKATA1_H__
#define __MESINKATA1_H__

#include "boolean.h"
#include "mesinkar.h"
#include "matriks.h"
#include "graph.h"

#define NMax 50
#define BLANK ' '
#define ENTER '\n'

typedef struct {
    char TabKata[NMax+1];
    int Length;
} Kata;

/* State Mesin Kata */
extern boolean EndKata;
extern Kata CKata;

void IgnoreBlank();
/* Mengabaikan satu atau beberapa BLANK
I.S.: CC sembarang
F.S.: CC ≠ BLANK atau CC = MARK */

void STARTKATA(char *namafile);
/* I.S.: CC sembarang
F.S.: EndKata = true, dan CC = Mark;
atau EndKata = false,
CKata adalah kata yang sudah diakuisisi,
CC karakter pertama sesudah karakter terakhir kata */

void ADVKATA();
/* I.S.: CC adalah karakter pertama kata yang akan diakuisisi
F.S.: CKata adalah kata terakhir yang sudah diakuisisi,
CC adalah karakter pertama dari kata berikutnya, mungkin MARK
Proses: Akuisisi kata menggunakan procedure SalinKata */

void SalinKata();
/* Mengakuisisi kata, menyimpan dalam CKata
I.S.: CC adalah karakter pertama dari kata
F.S.: CKata berisi kata yang sudah diakuisisi;
CC = BLANK atau CC = MARK;
CC adalah karakter sesudah karakter terakhir yang diakuisisi */

void InputCommand(Kata *K);
/* I.S. Sembarang
F.S. menerima masukkan dari user dan menyimpannya di K */

void PrintKata (Kata K);
/* I.S. Kata K terdefinisi
F.S. K tercetak di layar */

boolean IsKataSama (Kata K1, Kata K2);
/* true jika K1 sama dengan K2 */

void CreateKata(char c[], Kata *K);
/* I.S. string c[] terdefinisi
F.S. mengonversi bentuk string menjadi kata K */

MATRIKS KataToMatriks(int Baris, int Kolom);
/*Membaca kata menjadi matriks*/

int KataToInt (Kata K);
/* konversi kata menjadi integer*/

char KataToChar (Kata K);

#endif