/*
    Mr.Punyawat Jaroensiripong 6313133 EGCO
    นายปุญญาวัฒน์ เจริญศิริพงศ์ 6313133 EGCO
*/
#ifndef bubble_h
#define bubble_h
#include "swap.h"
void display(int value[], int N){
    int i;
    for(i=0;i<N;i++){
        printf("%5d",value[i]);
    }
    printf("\n");
}


void bubble(int a[], int N){
    int i,j,sort;
    for(i=N-1;i>0;i--){
        sort = 0;
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){            // decending
                swap(&a[j],&a[j+1]);
                sort = 1;
                display(a,N);
            }
        }
        if(sort==0){
            printf("--------END--------\n");
            return;
        }
    }
}

#endif /* bubble_h */