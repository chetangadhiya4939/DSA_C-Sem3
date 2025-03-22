#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll;
    char address[100];
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;

    // Loop to get student data from user
    while (count < MAX_STUDENTS) {
        printf("Enter details for student %d:\n", count + 1);

        printf("Name: ");
        fgets(students[count].name, sizeof(students[count].name), stdin);
        students[count].name[strcspn(students[count].name, "\n")] = 0;  // Remove newline character

        printf("Roll: ");
        scanf("%d", &students[count].roll);
        getchar();  // Consume the newline character

        printf("Address: ");
        fgets(students[count].address, sizeof(students[count].address), stdin);
        students[count].address[strcspn(students[count].address, "\n")] = 0;  // Remove newline character

        count++; // Increment the count of students

        // Ask if the user wants to continue
        if (count < MAX_STUDENTS) {
            char choice;
            printf("Do you want to add another student? (y/n): ");
            scanf(" %c", &choice);
            getchar();  // Consume the newline character

            if (choice != 'y' && choice != 'Y') {
                break; // Exit the loop if the user does not want to continue
            }
        }
    }

    // Print student data
    printf("\nStudent Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Student's name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Address: %s\n\n", students[i].address);
    }

    return 0;
}
