#include <stdio.h>
#include <stdlib.h>

void new_note()
{
    system("cls");

    printf("S E A N O T E - New Note\n\n");

    printf("Entry Name: ");
    char entry_name[240];
    fgets(entry_name, 240, stdin);
    printf("\n\n");

    printf("Entry Date: ");
    char entry_date[16];
    fgets(entry_date, 16, stdin);
    printf("\n\n");

    printf("Entry Content: ");
    char entry_content[2048];
    fgets(entry_content, 2048, stdin);
    printf("\n\n");

    printf("Review Entry? (Y/N): ");
    char review_choice;
    scanf("%c", &review_choice);

    if (review_choice == 'Y' || review_choice == 'y')
    {
        printf("\n\nYOUR ENTRY\n\n");
        printf("%s\n\n", entry_name);
        printf("%s\n\n", entry_date);
        printf("%s\n\n", entry_content);
    }
    else
    {
        printf("\n\nEntry Discarded\n");
    }
}

void saved_notes()
{
    system("cls");
    printf("\nS E A N O T E - Saved Notes\n\n");
}

void application_exit()
{
    system("cls");
    printf("\nUnder Construction\n");
}

int main()
{
    printf("S E A N O T E\n\n");
    printf("The Notes App in C\n\n");

    printf("Main Menu:\n\n");
    printf("1. NEW NOTE\n");
    printf("2. SAVED NOTES\n");
    printf("3. EXIT\n\n");

    printf("Enter Your Choice: ");
    int choice;
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
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