/**
 * @file addrecord.c
 * @author Gaurav Jain  (jgauravd@gmail.com)
 * @brief add_Record_file
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/phonebook.h"

void addrecord()
{
    system("cls");
    FILE *f;
    struct person p;
    f=fopen("project.txt","w");
    printf("\nEnter name: ");
    gets(p.name);
    printf("\nEnter the address: ");
    gets(p.address);
    printf("\nEnter father name: ");
    gets(p.father_name);
    printf("\nEnter mother name: ");
    gets(p.mother_name);
    printf("\nEnter phone no.: ");
    scanf("%lf",&p.mble_no);
    printf("\nEnter sex: ");
    scanf("%s",p.sex);
    printf("\nEnter e-mail: ");
    scanf("%s",p.mail);
    printf("\nEnter citizen no: ");
    scanf("%s",p.citision_no);
    fwrite(&p,sizeof(p),1,f);
    fflush(stdin);
    printf("\n\nRecord saved");
    fclose(f);
    printf("\n\nEnter any key");
	getc();
    system("cls");
    menu();
}
