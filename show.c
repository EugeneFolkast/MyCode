#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include"head.h"


void input_arr(int *array, int length)
{
    int i;
    for(i =0; i<length; i++){
        printf("\n vvedite %d element ", i);
        scanf("%d",&array[i]);
    }
}

void show_arr(float *arr, int length){

    int i;
    for (i=0;i<length;i++)
    {
        printf("%f", arr[i]);
        printf("\n");
    }
}

int max_and_min_arr(int* arr, int size){
    int i=0;
    int max = arr[0];
    int min = arr[0];

    for(i=1; i<size; i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    return (max-min);
}

void create_norm_array(int *arr, int length,float* norm_arr){
    int i =0;

    int max_mins_min = max_and_min_arr(arr, length);
    for(i=0; i<length; i++){
        norm_arr[i]=(float)arr[i]/(float)max_mins_min;
    }

}
