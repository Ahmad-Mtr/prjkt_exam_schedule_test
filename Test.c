// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver code
int main()
{
    FILE* ptr;
    char str[21000];
    char ch;
    ptr = fopen("C:\\Users\\youse\\CLionProjects\\prjkt_exam_schedule\\Exams2022_2023.txt", "r");
    int i=0;
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }

    printf("content of this file are \n");

    while (!feof(ptr)) {
        ch = fgetc(ptr);
        str[i]= ch;
        i++;
        printf("%c", ch);
    }
    printf("\n\n\n\n\n\n\n\n\nStrings:\n");
    puts(str);
    fclose(ptr);
    return 0;
}
