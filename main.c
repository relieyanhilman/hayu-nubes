#include<stdio.h>
#include<stdlib.h>
#include "boolean.h"
#include "arraydinamik.h"
#include "graph.h"
#include "listlinier.h"
#include "matriks.h"
#include "mesinkar.h"
#include "mesinkata.h"
#include "point.h"
#include "queue.h"

// GLOBAL VARIABLE
Kata K,MULAI,MOVE,STATUS,CHECKORDER,STARTBUILD,FINISHBUILD,ADDCOMPONENT,REMOVECOMPONENT,SHOP,DELIVER,END_DAY,SAVE,MAP,EXIT;
MATRIKS PETA;
int NB,NK;

void CREATECOMMAND(void)
{
    CreateKata("MOVE",&MOVE);
    CreateKata("START",&MULAI);
    CreateKata("STATUS",&STATUS);
    CreateKata("CHECKORDER",&CHECKORDER);
    CreateKata("STARTBUILD",&STARTBUILD);
    CreateKata("FINISHBUILD",&FINISHBUILD);
    CreateKata("ADDCOMPONENT",&ADDCOMPONENT);
    CreateKata("REMOVECOMPONENT",&REMOVECOMPONENT);
    CreateKata("SHOP",&SHOP);
    CreateKata("DELIVER",&DELIVER);
    CreateKata("END_DAY",&END_DAY);
    CreateKata("SAVE",&SAVE);
    CreateKata("MAP",&MAP);
    CreateKata("EXIT",&EXIT);   
}

void GETTEMPAT(void)
{
    NB = KataToInt(CKata);
    ADVKATA();
    NK = KataToInt(CKata);
}

void MAKEPETA()
{
    STARTKATA("konfigurasimap.txt");
    GETTEMPAT();
    MakeMATRIKS(NB,NK,&PETA);
    ADVKATA();
    int i=1;
    int j=1;
    int JUMLAHBANGUNAN = KataToInt(CKata);
    while(i<=JUMLAHBANGUNAN)
    {
        ADVKATA();
        Kata BANGUNAN = CKata;
        Kata C,B,S;
        CreateKata("C",&C);
        CreateKata("B",&B);
        CreateKata("S",&S);
        if (IsKataSama(BANGUNAN,CKata))
        {
            ADVKATA();
            GETTEMPAT();
            char BANGUNANINT = i +'0';
            if (BANGUNANINT == '1')
            {
                SetElement(&PETA,NB,NK,KataToChar(B));
            }
            else if (BANGUNANINT == '2')
            {
                SetElement(&PETA,NB,NK,KataToChar(S));
            }
            else
            {
                char PELANGGANINT = j +'0';
                SetElement(&PETA,NB,NK,PELANGGANINT);
                j++;
            }
            
        }
        i++;
    }
}

void Shop(void)
{
    int i=0;
    int y=0;
    printf("Komponen yang  tersedia :\n");
    printf("1. Motherboard Common ~$250\n");
    printf("2. Motherboard Super ~$500\n");
    printf("3. CPU Common ~$500\n");
    printf("4. CPU Super ~$750\n");
    printf("5. Memory Common ~$150\n");
    printf("6. Memory Super ~$200\n");
    printf("7. CPU Cooler Common ~$100\n");
    printf("8. CPU Cooler Super ~$150\n");
    printf("9. Case Common ~$25\n");
    printf("10. Case Super ~$50\n");
    printf("11. GPU Common ~300\n");
    printf("12. GPU Super ~400\n");
    printf("13. Storage Common ~150\n");
    printf("14. Storage Super\n");
    printf("15. PSU Common\n");
    printf("16. PSU Super\n");
    printf("Komponen yang ingin dibeli :\n");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 2:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 3:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 4:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 5:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 6:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 7:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 8:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 9:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 10:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 11:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    case 12:
        printf("Masukkan yang ingin dibeli :\n");
        scanf("%d",y);
        break;
    
    default:
        printf("Invalid Input!");
        Shop();
        break;
    } 
}


int main()
{
    MAKEPETA();
    CREATECOMMAND();
    printf("KETIK START UNTUK MEMULAI!\n");
    InputCommand(&K);
    while (!IsKataSama(K,MULAI))
    {
        printf("INVALID INPUT!");
        InputCommand(&K);
    }
    printf("SELAMAT BERMAIN!!!\n");
    printf("ENTER A COMMAND : ");
    InputCommand(&K);
    while (!IsKataSama(K,EXIT))
    {
        if (IsKataSama(K,MOVE))
        {
            printf("AKU IMBA1\n");
        }
        else if (IsKataSama(K,STATUS))
        {
            printf("AKU IMBA2\n");
        }
        else if (IsKataSama(K,CHECKORDER))
        {
            printf("AKU IMBA3\n");
        }
        else if (IsKataSama(K,STARTBUILD))
        {
            printf("AKU IMBA4\n");
        }
        else if (IsKataSama(K,FINISHBUILD))
        {
            printf("AKU IMBA5\n");
        }
        else if (IsKataSama(K,ADDCOMPONENT))
        {
            printf("AKU IMBA6\n");
        }
        else if (IsKataSama(K,REMOVECOMPONENT))
        {
            printf("AKU IMBA7\n");
        }
        else if (IsKataSama(K,SHOP))
        {
            Shop();
        }
        else if (IsKataSama(K,DELIVER))
        {
            printf("AKU IMBA9\n");
        }
        else if (IsKataSama(K,END_DAY))
        {
            printf("AKU IMBA10\n");
        }
        else if (IsKataSama(K,SAVE))
        {
            printf("AKU IMBA11\n");
        }
        else if (IsKataSama(K,MAP))
        {
            TulisMATRIKS(PETA);
        }
        else
        {
            printf("INVALID COMMAND!\n");
        }
        printf("ENTER COMMAND : ");
        InputCommand(&K);
    }
    return 0;
}