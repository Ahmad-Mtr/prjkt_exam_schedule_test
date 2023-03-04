/* strtok example */
#include <stdio.h>
#include <string.h>

struct Exam {
    char code[8];
    char Name[64];
    char date_st[5];
    char date_end[6];
    char date[2];
    char month[2];
    char year[4];
    char day[3];
    char rooms[64];
};

//char *strtok(char *str, const char *delimiters);

int main() {
    struct Exam infoarr[2];
    int A = 0, B = 1, C = 2, D = 3, E = 4, F = 5, G = 6, H = 7, I = 8;
    char str[] = "CS415\tSystems Programming\t08:30-10:30\t21-01-2023 , Sat\tM424+M426\n"
                 "ACC598B\tSpecial Topics in Accounting\t08:30-10:30\t21-01-2023 , Sat\tB018";
    char *pch;
    printf("Splitting string \"\" into tokens:\n");
    pch = strtok(str, "\t\n,.-");
    int token_counter = 0, info_ap_index=-9;
    for (int s = 0; s < 2; ++s) {
        while (pch != NULL){
            printf("%s\t%d\n",pch, token_counter);
            for (info_ap_index+=9; info_ap_index < (info_ap_index+9); ++info_ap_index) {
                if (token_counter == A){
                    strcpy(infoarr[s].code, pch);
                    A+=9;
                } else if(token_counter == B){
                    strcpy(infoarr[s].Name, pch);
                    B+=9;
                } else if(token_counter == C){
                    strcpy(infoarr[s].date_st, pch);
                    C+=9;
                }
                else if(token_counter == D){
                    strcpy(infoarr[s].date_end, pch);
                    D+=9;
                }
                else if(token_counter == E){
                    strcpy(infoarr[s].date, pch);
                    E+=9;
                }
                else if(token_counter == F){
                    strcpy(infoarr[s].month, pch);
                    F+=9;
                }
                else if(token_counter == G){
                    strcpy(infoarr[s].year, pch);
                    G+=9;
                }
                else if(token_counter == H){
                    strcpy(infoarr[s].day, pch);
                    H+=9;
                } else{
                    strcpy(infoarr[s].rooms,pch);
                    I+=9;
                }
            }
            token_counter++;

            pch = strtok(NULL, "\t\n,.-");

        }
    }
    for (int i = 0; i < 2; ++i) {
        printf("Exam #%d\ncode:%s  name:%s  %s-%s   %d/%d/%d %s   %s\n", i + 1, infoarr[i].code, infoarr[i].Name,
               infoarr[i].date_st, infoarr[i].date_end, infoarr[i].date, infoarr[i].month, infoarr[i].year,
               infoarr[i].day, infoarr[i].rooms);
    }
    return 0;
}