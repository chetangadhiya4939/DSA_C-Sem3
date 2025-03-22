#include <stdio.h>

int main() {
    // Array of pointers
    const char *fruits[] = {"Apple", "Banana", "Cherry"};
    
    printf("Array of Pointers:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }

    // Pointer to an array
    int numbers[] = {10, 20, 30};
    int *ptr = numbers;

    printf("\nPointer to Array:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));  // Accessing elements using pointer
    }

    return 0;
}
