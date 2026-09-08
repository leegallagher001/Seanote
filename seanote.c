#include <stdio.h>
#include <stdlib.h>

void new_note() {
    system("cls");
    printf("\nS E A N O T E - New Note\n");
}

void saved_notes() {
    system("cls");
    printf("\nS E A N O T E - Saved Notes\n");
}

void application_exit() {
    system("cls");
    printf("\nUnder Construction\n");
}

int main() {
    printf("S E A N O T E\n\n");
    printf("The Notes App in C\n\n");

    printf("Main Menu:\n\n");
    printf("1. NEW NOTE\n");
    printf("2. SAVED NOTES\n");
    printf("3. EXIT\n\n");

    printf("Enter Your Choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            new_note();
            break;
        case 2:
            saved_notes();
            break;
        case 3:
            application_exit();
            break;
    }

    return 0;
}