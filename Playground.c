/* strtok example */
#include <stdio.h>
#include <string.h>

struct Exam {
    char code[8];
    char Name[64];
    char date_st[5];
    char date_end[6];
    int date;
    int month;
    int year;
    char day[3];
    char rooms[64];
};

char *strtok(char *str, const char *delimiters);

int main() {
    struct Exam infoarr[2];
    int A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9;
    char str[] = "CS415\tSystems Programming\t08:30-10:30\t21-01-2023 , Sat\tM424+M426\n"
                 "ACC598B\tSpecial Topics in Accounting\t08:30-10:30\t21-01-2023 , Sat\tB018";
    char *pch;
    printf("Splitting string \"%s\" into tokens:\n", str);
    pch = strtok(str, "\t\n,.-");
    for (int token_counter = 0; pch != NULL; token_counter++) {
        printf("%s\t%d\n", pch, token_counter);
        for (int i = 0; i < 10; ++i) {
            if (token_counter == A-1){

            }
        }
        //token_counter++;
        pch = strtok(NULL, "\t\n,.-");
    }
    for (int i = 0; i < 2; ++i) {
        printf("Exam #%d\ncode:%s  name:%s  %s-%s   %d/%d/%d %s   %s\n", i + 1, infoarr[i].code, infoarr[i].Name,
               infoarr[i].date_st, infoarr[i].date_end, infoarr[i].date, infoarr[i].month, infoarr[i].year,
               infoarr[i].day, infoarr[i].rooms);
    }
    return 0;
}