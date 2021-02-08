#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void Write_In_File( char Stroki[255], double bufArray[50], char sep[10], int size);



int main() {
    int size = 50;
    char Stroki [255];    // Объявляем массив символов
    double  bufArray[size];    // Промежуточный массив для упрощения сортировки
    char sep[10] = {' '};   // Символ, по которому будет разбиваться строка из файла


    //Вызываем функцию обработки и записи в файл
    Write_In_File(Stroki, bufArray, sep, size);


    getchar();
    return 0;
}





void Write_In_File( char Stroki[255], double bufArray[50], char sep[10], int size){


    double sum = 0;
    int b = 50;
    double NewArray [1] [b];
    int f = 0;
    char *bufer;
    char *str;          // Указатель на адрес масива


    // Обнуление массива
    for (int i = 0; i < 1; ++i) {
        for (int j = 0; j < 50; ++j) {
            NewArray[i][j] = 0;
        }
    }

    FILE *TestFile;     // Создаём указатель на поток файла
    TestFile = fopen ("D:\\Programming\\Clionprojects\\11Lab\\test.txt", "r");      // Присваиваем указателю адрес потока

    // Открываем файл для записи результата
    FILE *ResultFile;
    ResultFile = fopen("D:\\Programming\\Clionprojects\\11Lab\\result.txt", "w");   // Присваиваем указателю адрес потока


    printf("Started reading the file\n");
    while (1)
    {

        // Чтение одной строки  из файла
        str = fgets (Stroki, sizeof ( char [255] ), TestFile);

        //Проверка на конец файла или ошибку чтения
        if (str == NULL)
        {
            // Проверяем, что именно произошло: кончился файл
            // или это ошибка чтения
            if ( feof (TestFile) != 0)
            {
                //Если файл закончился, выводим сообщение о завершении
                //чтения и выходим из бесконечного цикла
                printf("File successfully readed!\n");
                printf ("File reading is over :3 \n");
                printf("Please, type 'Enter' button to end programm, now you can open new file\n");
                break;
            }
            else
            {
                //Если при чтении произошла ошибка, выводим сообщение
                //об ошибке и выходим из бесконечного цикла
                printf ("File reading ERROR \n");
                break;
            }
        }
        //Отрезаем от строки первый элемент
        bufer = strtok (Stroki, sep);

        //Разрезаем строку по пробелам, конвертируя каждый новый элемент в double, и прибавляем к "sum" (Сумма элементов строки)
        while (bufer != NULL){

            sum = strtod (bufer, &bufer) + sum;
            printf("%s", bufer);
            bufer = strtok (NULL, sep);

        }

        bool r = true;

        //Первоначальное заполнение нового массива суммы
        for (int i = 0; i < 1; ++i) {
            for ( int j = f; j < b; ++j) {
                if (r == true){
                    NewArray[i][j] = sum;
                    r = false;
                }
            }
        }

        f++;
        sum = 0;
    }

    //Переведём двумерный массив в одномерный для упрощения сортировки
    for (int i = 0; i < 1 ; ++i) {
        for (int j = 0; j < size; ++j) {
            bufArray [j] = NewArray[i][j];
        }
    }

    //Проведём сортировку одномерного массива
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = (size -1 ); j > i; j--) // для всех элементов после i-ого
        {
            if (bufArray[j - 1] > bufArray[j]) // если текущий элемент меньше предыдущего
            {
                double temp = bufArray[j - 1]; // меняем их местами
                bufArray[j - 1] = bufArray[j];
                bufArray[j] = temp;
            }
        }
    }


    // Запись отсортированного и отформатированного масива значений в файл
    for (int i = (size-1); i >= 0; --i) {
        char num[1];
        if (bufArray[i] == 0) continue;
        sprintf(num, "%f", bufArray[i]);
        fprintf(ResultFile, "%30.20s \n\n", num);
    }


    fclose(ResultFile);// закрываем файл, в который мы записывали  результат
    fclose(TestFile); // Закрываем файл с массивом чисел
}
