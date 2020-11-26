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
Kata K,MOVE,STATUS,CHECKORDER,STARTBUILD,FINISHBUILD,ADDCOMPONENT,REMOVECOMPONENT,SHOP,DELIVER,END_DAY,SAVE,MAP,EXIT;


void COMMAND(void){
    CreateKata("MOVE",&MOVE);
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

int main(){
    COMMAND();
    printf("ENTER COMMAND : ");
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
            printf("AKU IMBA8\n");
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
            printf("AKU IMBA12\n");
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