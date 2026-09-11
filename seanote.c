#include <stdio.h>
#include <stdlib.h>

void new_note() {
    system("cls");

    printf("\nS E A N O T E - New Note\n\n");

    printf("Entry Name: ");
    char entry_name[240];
    scanf("%s", entry_name[240]);
    printf("\n\n");

    printf("Entry Date: ");
    char entry_date[16];
    scanf("%s", entry_date[16]);
    printf("\n\n");

    printf("Entry Content: ");
    char entry_content[2048];
    scanf("%s", entry_content[2048]);
    printf("\n\n");

    printf("Review Entry? (Y/N): ");
    char review_choice;
    scanf("%c", &review_choice);

    if (review_choice == 'Y' || review_choice == 'y') {
        printf("\n\nYOUR ENTRY\n\n");
        printf("%s\n\n", entry_name[240]);
        printf("%s\n\n", entry_date[16]);
        printf("%s\n\n", entry_content[2048]);
    } else {
        printf("\n\nEntry Discarded\n");
    }
}

void saved_notes() {
    system("cls");
    printf("\nS E A N O T E - Saved Notes\n\n");
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