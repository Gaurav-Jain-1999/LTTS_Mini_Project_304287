/**
 * @file addrecord.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "phonebook.h"

void addrecord()
{
    system("cls");
    FILE *f;
    struct person p;
    f=fopen("project","ab+");
    printf("\n Enter name: ");
    gets(p.name);
    printf("\nEnter the address: ");
    gets(p.address);
    printf("\nEnter father name: ");
    gets(p.father_name);
    printf("\nEnter mother name: ");
    gets(p.mother_name);
    printf("\nEnter phone no.: ");
    scanf("%ld",&p.mble_no);
    printf("Enter sex: ");
    gets(p.sex);
    printf("\nEnter e-mail: ");
    gets(p.mail);
    printf("\nEnter citizen no: ");
    gets(p.citision_no);
    fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
    printf("\nRecord saved");
    fclose(f);
    printf("\n\nEnter any key");
	getch();
    system("cls");
    menu();
}
