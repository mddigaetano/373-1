//Author: amedeo39

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void ins_sort_interno(int v[],int n){
    int i,j,scambio;
    
    for(i=0;i<n;i++){
        for(j=i;(j>0) && (v[j-1]>v[j]);j--){
            scambio=v[j];
            v[j]=v[j-1];
            v[j-1]=scambio;
        }
    }
}

int main(int argc, char** argv) {
    int v[N], i;
    
    srand(time(NULL));
    
    for(i=0;i<N;i++){
        v[i]=(rand()%100)+1;
        printf("Vettore [%d]: %d\n",i,v[i]);
    }
    
    ins_sort_interno(v,N);
    
    for(i=0;i<N;i++){
        printf("\nVettore [%d]: %d",i,v[i]);
    }

    return (EXIT_SUCCESS);
}

