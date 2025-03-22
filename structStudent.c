#include <stdio.h>
#include <string.h>

struct Student {
    char s[50];
    int roll;
    char add[100];
};

int main() {
    struct Student student; 

    strcpy(student.s, "Ghanshyam Pandey");
    student.roll = 23182;
    strcpy(student.add, "Akshardham");

    printf("Student's name : %s\n", student.s);
    printf("Roll : %d\n", student.roll);
    printf("Add : %s\n", student.add);

    return 0;
}
