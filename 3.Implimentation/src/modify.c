/**
 * @file modify.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "phonebook.h"

void modifyrecord()
{
    int c;
    FILE *f;
    int flag=0;
    struct person p,s;
	char  name[50];
	f=fopen("project","rb+");
	if(f==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");
			exit(1);


		}
	else
	{
	    system("cls");
		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            gets(name);
            while(fread(&p,sizeof(p),1,f)==1)
            {
                if(strcmp(name,p.name)==0)
                {



                    printf("\n Enter name: ");
                    gets(s.name);
                    printf("\nEnter the address: ");
                    gets(s.address);
                    printf("\nEnter father name: ");
                    gets(s.father_name);
                    printf("\nEnter mother name: ");
                    gets(s.mother_name);
                    printf("\nEnter phone no: ");
                    scanf("%ld",&s.mble_no);
                    printf("\nEnter sex: ");
                    gets(s.sex);
                    printf("\nEnter e-mail: ");
                    gets(s.mail);
                    printf("\nEnter citizen no: \n");
                    gets(s.citision_no);
                    fseek(f,-sizeof(p),SEEK_CUR);
                    fwrite(&s,sizeof(p),1,f);
                    flag=1;
                    break;



                }
                fflush(stdin);


            }
            if(flag==1)
            {
                printf("\n your data id modified");

            }
            else
            {
                    printf(" \n data is not found");

            }
            fclose(f);
	}
	 printf("\n Enter any key");
	 getch();
    system("cls");
	menu();

}