/**
 * @file menu.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/phonebook.h"

void menu()
{
system("cls");
printf("\t\t*********WELCOME TO PHONEBOOK*************");
printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Delete  \n\t4.Modify \t5.Search\t6.Exit\n\n Enter a choice: ");

switch(getch())
{
    case '1': addrecord();break;
    case '2': listrecord();break;
    case '3': deleterecord();break;
    case '4': modifyrecord();break;
    case '5': searchrecord();break;
    case '6': exit(0);break;
    default:
                system("cls");
                printf("\nEnter choices 1 to 6 only");
                printf("\n\nEnter any key");
                getc();
                menu();
}
}