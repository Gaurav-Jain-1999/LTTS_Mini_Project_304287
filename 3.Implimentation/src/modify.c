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

#include "../inc/phonebook.h"

void modifyrecord()
{
    FILE *f;
    int flag=0;
    struct person p,s;
	char  name[50];
	f=fopen("project.txt","r+");
	if(f==NULL || fread(&p,sizeof(p),1,f)==0)
		{

			printf("NO DATA ADDED YET.");
			menu();
		}
	else
	{
	    system("cls");
		printf("\nEnter CONTACT'S NAME TO MODIFY:\n");
            scanf("%s",name);
            while(fread(&p,sizeof(p),1,f)>0)
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
                    scanf("%lf",&s.mble_no);
                    printf("\nEnter sex: ");
                    scanf("%s",s.sex);
                    printf("\nEnter e-mail: ");
                    scanf("%s",s.mail);
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
                    printf("\n Add new data");
                    addrecord();
            }
            fclose(f);
	}
	 printf("\n Enter any key");
	 getc(stdin);
     system("cls");
	 menu();

}
