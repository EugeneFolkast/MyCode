#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../first/head.h"

int main()
{
    int size;

    printf("vvedite razmer ");
    scanf("%i",&size);

    int arr[size];
    int arr1[size];
    int arr2[size];


    printf("zapolnbte 1 colectiy\n");
    input_arr(arr, size);

    printf("zapolnbte 2 colectiy\n");
    input_arr(arr1, size);

    printf("zapolnbte 3 colectiy\n");
    input_arr(arr2, size);


    float *a1 = arr,
    *a2 = arr1,
    *a3 = arr2;

    create_norm_array(arr, size,a1);
    create_norm_array(arr1, size,a2);
    create_norm_array(arr2, size,a3);

    float res_arr[size];
    float res_arr2[size];
    int i;


    for(i=0; i<size; i++){
        res_arr[i] = a1[i]+a2[i];
        res_arr2[i] = a2[i]+a3[i];
    }

    printf("result1\n");
    show_arr(res_arr, size);

    printf("\nresult2\n");
    show_arr(res_arr2, size);

    return 0;
}
