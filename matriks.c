#include "matriks.h"
#include<stdlib.h>
#include<stdio.h>

void MakeMATRIKS (int NB, int NK, MATRIKS * M){
    M->NBrsEff = NB;
    M->NKolEff = NK;
    int i,j;
    for (i = 0; i < NB+2; i++){
        for (j = 0; j < NK+2; j++){
            if (i == 0 || j==0 || i == NB+1 || j == NK+1){
                ElmtMatriks(*M,i,j) = '*';
            }
            else {
                ElmtMatriks(*M,i,j) = ' ';
            }
        }
    }
}


boolean IsIdxValidMatriks (int i, int j){
    return (i >= BrsMin && i <= BrsMax && j >= KolMin && j <= KolMax);
}


void BacaMATRIKS (MATRIKS * M, int NB, int NK){
    MakeMATRIKS(NB, NK, M);
    int i,j;
    for (i = GetFirstIdxBrs(*M); i <= GetLastIdxBrs(*M); i++){
        for (j = GetFirstIdxKol(*M); j <= GetLastIdxKol(*M); j++){
            scanf("%d", &(M->Mem[i][j]));
        }
    }
}


void TulisMATRIKS (MATRIKS M){
    indeks i = 0;
    indeks j = 0;
    for (i=0; i<NBrsEff(M)+2;i++){
        for (j=0;j<NKolEff(M)+2;j++){
            printf("%c",ElmtMatriks(M,i,j));
        }
        printf("\n");
    }   
}


indeks GetFirstIdxBrs (MATRIKS M){
    return BrsMin;
}

indeks GetFirstIdxKol (MATRIKS M){
    return KolMin;
}

indeks GetLastIdxBrs (MATRIKS M){
    return M.NBrsEff-1;
}

indeks GetLastIdxKol (MATRIKS M){
    return M.NKolEff-1;
}


void SetElement(MATRIKS *M,int NB,int NK){
    ElTypeMatriks X;
    scanf("%c",&X);
    ElmtMatriks(*M,NB,NK) = X;
}

char GetElement(MATRIKS M,int NB,int NK){
    return ElmtMatriks(M,NB,NK);
}