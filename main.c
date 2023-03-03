#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*Libraries part ends here:)*/

const int exams_len = 3;
char str[21000];

/*Global Variables part ends here:)*/

struct Courses {
    char Course_code[8];
    char Course_Name[128];
    char Course_time_start[5];
    char Course_time_end[5];
    int Course_Date;
    int Course_Month;
    int Course_Year;
    char Course_day[4];
    char Course_rooms[128];
};//Struct

//                                                           Functions Part Starts here: //

void Print_All_Info() {}// All Info FUNCTION
void Print_Specific_Info() {
    printf("Enter your course's code for all info of it:");//تنساش تعمل كول للفنكشن تاعتها وتحط جواتها انها تعرف ايش توخذ وكيف توخذ كود الكورس
} //Specific Info FUNCTION

/*Info Functions end here :(*/
char *strtok(char *str, const char *delimiters);
int get_input_key() {
    char input_key[20];
    bool input_bool_all, input_bool_specific;

    printf("Hello!\nWelcome to the ExamFinder App!!\ntype |all| to call all data\ntype |specific| to look for a particular exam info.\ninput:");
    gets(input_key);
    fflush(stdin);
    input_bool_all = strcmp(input_key, "all");
    input_bool_specific = strcmp(input_key, "specific");


    if (input_bool_all == 0) {
        Print_All_Info();
    } else if (input_bool_specific == 0) {
        Print_Specific_Info();
    } else {
        printf("PLZZZ RE-run:)");
        return 0;
    }
    return 10;
} //Input Key FUNCTION.
int get_file(char File_Name[20]) {
    FILE *ptrFILE;
    char ch;
    ptrFILE = fopen("C:\\Users\\youse\\CLionProjects\\prjkt_exam_schedule\\data.txt", "r");
    int i = 0;
    if (NULL == ptrFILE) {
        printf("THIS FILE CANT BE OPENED\n");
        return 0;
    }
    while (!feof(ptrFILE)) {
        ch = fgetc(ptrFILE);
        str[i] = ch;
        i++;
    }
    fclose(ptrFILE);
    return 0;
}

/*other Functions end here :|*/
int main() {
    int xXx = 10; //          gets input key
    xXx = get_input_key();// and checks if
    if (xXx == 0) //          it's "all" ||
        return 0; //         "specific"

    get_file("data"); //function call

    struct Courses exam[exams_len]; // Struct Array Declaration

    system("pause");// main end
    return 0;

}
