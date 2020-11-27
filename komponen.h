#ifndef komponen_H
#define komponen_H

#include "boolean.h"
#include "point.h"
#include "mesinkar.h"
#include "mesinkata.h"

// DEFINISI ADT KOMPONEN
typedef struct {
	int Kategori;		/* Kategori Komponen =
						1. Motherboard (Mb)
						2. CPU (CPU)
						3. Memory (M)
						4. CPU Cooler (CC)
                        5. Case (C)
                        6. GPU (G)
                        7. Storage (S)
                        8. PSU (P)
					    */
	int Nama;	        /* Nama tiap komponen 
                        1: Motherboard Common
                        2: Motherboard Super
                        3: CPU Common
                        4: CPU Super
                        5: Memory Common
                        6: Memory Super
                        7: CPU Cooler Common
                        8: CPU Cooler Super
                        9: Case Common
                        10: Case Super
                        11: GPU Common
                        12: GPU Super
                        13: Storage Common
                        14: Storage Super
                        15: PSU Common
                        16: PSU Super
                        */
	int Harga;	        /* Harga Komponen
                        1: Motherboard Common
                        2: Motherboard Super
                        3: CPU Common
                        4: CPU Super
                        5: Memory Common
                        6: Memory Super
                        7: CPU Cooler Common
                        8: CPU Cooler Super
                        9: Case Common
                        10: Case Super
                        11: GPU Common
                        12: GPU Super
                        13: Storage Common
                        14: Storage Super
                        15: PSU Common
                        16: PSU Super
                        */
	int Jumlah; 		/* Jumlah Komponen */
} Komponen;

// SELEKTOR
#define Kategori(K) (K).Kategori
#define Nama(K) (K).Nama
#define Harga(K) (K).Harga
#define Jumlah(K) (K).Jumlah



/* ************ Prototype ************ */
/* *** Konstruktor/Kreator *** */
void MakeEmptyKomponen(Komponen *K,int y);


void PrintNama(Komponen K);
	/* Mencetak nama bangunan B sesuai tipe:
		1: Castle (C)
		2: Tower (T)
		3: Fort (F)
		4: Village (V)
	*/
#endif