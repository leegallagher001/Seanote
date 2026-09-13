#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    getchar();

    if (review_choice == 'Y' || review_choice == 'y')
    {
        printf("\n\nYOUR ENTRY\n\n");
        printf("%s\n\n", entry_name);
        printf("%s\n\n", entry_date);
        printf("%s\n\n", entry_content);

        printf("\n\nWould you like to save entry? (Y/N): ");
        char save_choice;
        scanf("%c", &save_choice);
        getchar();

        if (save_choice == 'Y' || save_choice == 'y') {
            char filename[64];

            entry_name[strcspn(entry_name, "\n")] = '\0';
            entry_date[strcspn(entry_date, "\n")] = '\0';
            snprintf(filename, sizeof(filename), "%s_%s.txt", entry_name, entry_date);

            FILE* fptr = fopen(filename, "w");

            fprintf(fptr, "%s\n\n", entry_name);
            fprintf(fptr, "%s\n\n", entry_date);
            fprintf(fptr, "%s\n\n", entry_content);

            fclose(fptr);

            printf("\n\nFile Saved Successfully!\n");
        } else {
            printf("\n\nEntry Discarded\n");
        }
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