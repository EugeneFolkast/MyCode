#include <stdio.h>
#include <string.h>

struct Sotr{
    char sername[100];
    char name[20];
    char secondname[10];
    char position[200];
    int year;
};

void vvod(struct Sotr arrSotr[], int size){
    for(int i=0; i<size; i++){
        printf("\nВведите имя\n");
        gets(arrSotr[i].name);

        printf("\nВведите фамилию\n");
        gets(arrSotr[i].sername);

        printf("\nВведите отчество\n");
        gets(arrSotr[i].secondname);

        printf("\nВведите должность\n");
        gets(arrSotr[i].position);

        printf("\nВведите стаж\n");
        int x = 0;
        scanf("%d",&x);
        arrSotr[i].year=x;
        getchar();
    }
}

void show(struct Sotr arrSotr) {
    printf("\n");
    printf("\n");
        printf("\nВведите имя\n");
        puts(arrSotr.name);

        printf("\nВведите фамилию\n");
        puts(arrSotr.sername);

        printf("\nВведите отчество\n");
        puts(arrSotr.secondname);

        printf("\nВведите должность\n");
        puts(arrSotr.position);

        printf("\nВведите стаж\n");
        printf("%d",arrSotr.year);


}

void obrab(struct Sotr arrSotr[], int size, int k){
    for (int i = 0; i < size; i++) {
        if(arrSotr[i].year>=k)
            show(arrSotr[i]);
    }
}

int main()
{
    const int SIZE=3;
    struct Sotr arrSotr[SIZE];

    vvod(arrSotr, SIZE);

    int k =0;

    printf("введите к   ");
    scanf("%d", &k);

    obrab(arrSotr, SIZE, k);

    return 0;
} 
