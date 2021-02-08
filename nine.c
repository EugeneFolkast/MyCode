#include<stdio.h>
#include<string.h>
void select_word(const char* in, char* out1);

int main() {
    char str[20][129];
    char out1[128];

    for(int i=0; i<2; i++){
        gets(str[i]);
    }

    for(int i=0; i<2; i++){
        select_word(str[i], out1);
        puts(out1);
    }

    return 0;
}

void select_word(const char* in, char* out1) {
    char buf[128][128];
    char *p;

    strcpy(out1, "");

    int i=0;

    p = strtok(in, " ");
    while (p) {
        strcpy(buf[i], p);
        p = strtok(NULL, " ");
        i++;
    }

    strcat(out1, buf[i-1]);
    for(int j=1; j<i-1; j++) {
        strcat(out1, buf[j]);
        strcat(out1, " ");
    }
    strcat(out1, buf[0]);

}
