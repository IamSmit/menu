/*Menu*/

#include<stdio.h>

int main()
{
    mainmenu:
    printf("\t\tMAIN MENU\n");
    printf("1.All Product Records\n2.Selling Records\n3.Purchase Records\n4.Return Records\n5.Exit\n");
    printf("Enter the particular number for the particular menu option to be operated.");
    int num;
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("You Selected \"All Product Records\"\n\"PRESS 0 TO GO TO MAIN MENU\"");
        break;
    
    case 2:
        printf("You Selected \"Selling Records\"\n\"PRESS 0 TO GO TO MAIN MENU\"");
        break;

    case 3:
        printf("You Selected \"Purchase Records\"\n\"PRESS 0 TO GO TO MAIN MENU\"");
        break;

    case 4:
        printf("You Selected \"Return Records\"\n\"PRESS 0 TO GO TO MAIN MENU\"");
        break;

    case 5:
        printf("You Selected \"Exit from Menu\"\n\"PRESS 0 TO GO TO MAIN MENU\"");
        break;

    case 0:
        goto mainmenu;
        break;
    default:
        printf("\"Enter the number from 0 to 5.\"");
        break;
    }
    return 0;
}
