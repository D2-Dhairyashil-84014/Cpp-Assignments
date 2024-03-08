#include <stdio.h>

struct Date
{

    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}
void printDateOnConsole(struct Date *ptrDate)
{

    printf("Date: %d-%d-%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter Date: ");
    scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}

int main()
{
    struct Date d1;
    int choice;
    do
    {
        printf("Enter 0: Exit\n");
        printf("Enter 1: InitDate\n");
        printf("Enter 2: AcceptDate\n");
        printf("Enter 3: PrintDate\n");
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exit\n");
            break;

        case 1:
            initDate(&d1);
            break;

        case 2:
            acceptDateFromConsole(&d1);
            break;

        case 3:
            printDateOnConsole(&d1);
            break;

        default:
            printf("Invalid choice");
        };

    } while (choice != 0);

    return 0;
}