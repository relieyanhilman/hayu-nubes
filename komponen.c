#include<stdio.h>
#include<stdlib.h>
#include<komponen.h>

void MakeEmptyKomponen(Komponen *K,int y){
    Nama(*K) = y;
    switch (Nama(*K))
    {
    case 1:
        Kategori(*K) = 1;
        Harga(*K) = 250;
        Jumlah(*K) = 0;
        break;
    default:
        break;
    }
}


void PrintNama(Komponen K);
	/* Mencetak nama bangunan B sesuai tipe:
		1: Castle (C)
		2: Tower (T)
		3: Fort (F)
		4: Village (V)
	*/



