/**
 * @file phonebook.h
 * @author Gaurav_Jain (you@domain.com)
 * @brief header file
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#endif

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "windows.h"

struct person
{
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long double mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];
};

void menu();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

