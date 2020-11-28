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
    case 2:
        Kategori(*K) = 1;
        Harga(*K) = 500;
        Jumlah(*K) = 0;
        break;
    case 3:
        Kategori(*K) = 2;
        Harga(*K) = 500;
        Jumlah(*K) = 0;
        break;
    case 4:
        Kategori(*K) = 2;
        Harga(*K) = 750;
        Jumlah(*K) = 0;
        break;
    case 5:
        Kategori(*K) = 3;
        Harga(*K) = 150;
        Jumlah(*K) = 0;
        break;
    case 6:
        Kategori(*K) = 3;
        Harga(*K) = 200;
        Jumlah(*K) = 0;
        break;
    case 7:
        Kategori(*K) = 4;
        Harga(*K) = 100;
        Jumlah(*K) = 0;
        break;
    case 8:
        Kategori(*K) = 4;
        Harga(*K) = 150;
        Jumlah(*K) = 0;
        break;
    case 9:
        Kategori(*K) = 5;
        Harga(*K) = 25;
        Jumlah(*K) = 0;
        break;
    case 10:
        Kategori(*K) = 5;
        Harga(*K) = 50;
        Jumlah(*K) = 0;
        break;
    case 11:
        Kategori(*K) = 6;
        Harga(*K) = 300;
        Jumlah(*K) = 0;
        break;
    case 12:
        Kategori(*K) = 6;
        Harga(*K) = 400;
        Jumlah(*K) = 0;
        break;
    case 13:
        Kategori(*K) = 7;
        Harga(*K) = 150;
        Jumlah(*K) = 0;
        break;
    case 14:
        Kategori(*K) = 7;
        Harga(*K) = 200;
        Jumlah(*K) = 0;
        break;
    case 15:
        Kategori(*K) = 8;
        Harga(*K) = 150;
        Jumlah(*K) = 0;
        break;
    case 16:
        Kategori(*K) = 8;
        Harga(*K) = 400;
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



