/**
 * @file delete.c
 * @author Gaurav Jain (jgauravd@gmail.com)
 * @brief  Delelte_Record
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../inc/phonebook.h"

void deleterecord()
{
    struct person p;
    FILE *f,*ft;
	int flag;
	char name[100];
	f=fopen("project.txt","r");
	if(f==NULL)
		{

			printf("CONTACT'S DATA NOT ADDED YET.");

		}
	else
	{
		ft=fopen("temp","w+");
		if(ft==NULL)

            printf("file opaning error");
		else
        {


	printf("Enter CONTACT'S NAME:");
	gets(name);

	fflush(stdin);
	while(fread(&p,sizeof(p),1,f)==1)
		{
			if(strcmp(p.name,name)!=0)
				fwrite(&p,sizeof(p),1,ft);
			if(strcmp(p.name,name)==0)
                flag=1;
		}
	fclose(f);
	fclose(ft);
	if(flag!=1)
	{
		printf("NO CONACT'S RECORD TO DELETE.");
		remove("temp.txt");
	}
	else
		{
			remove("project.txt");
			rename("temp.txt","project.txt");
			printf("RECORD DELETED SUCCESSFULLY.");

		}
	}
}
    printf("\n Enter any key");
    getch();
    system("cls");
    menu();
}