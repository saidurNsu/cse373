
#include <stdio.h>
#include<algorithm>
#include<math.h>
#include<iostream>
int main(void){


int i; //
int size; //
int start;//
int end;//
int n=0;//
int l=0;//
//

printf("type desired interval pairs size: ");//
scanf("%d", &size);//

int array1[size], array2[size];//

printf("type desired sub intervals: ");//

for (i = 0; i < size; i++){
    scanf("%d",&array1[i]);//
    scanf("%d",&array2[i]);//

}
printf("type interval: ");//
scanf("%d", &start);//
scanf("%d", &end);//

for(i = 0; i<size; i ++){
    if( array1[i] == start && array2[i] == end ){
        n= n+1;//
        l = end;//
    }
    else if (array1[i] == start && ((array2[i] - array1[i])>(array2[i+1] - array1[i+1]))){
        n= n+1;//
        l = array2[i];//
             }
    else if (array1[i] == start && ((array2[i+1] - array1[i+1])>(array2[i] - array1[i]))){
                n= n+1;//
                l = array2[i+1];//
    }
}
printf(n);//
}
