/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DISK_MAXLEN 2560
#define DBR_SIZE 2     /// DBR����ĳ��� Ŀǰֻ��fat�ĸ����͸�Ŀ¼����
#define TABLE_SIZE 80 

#define fatnum 80
using namespace std;
char Disk[DISK_MAXLEN];   ///���̹���

int DBR[DBR_SIZE];

struct fcb
{
	short index;
	short datasize;
	short filesize;
};

struct dir_ele
{
	char filename[80];
	char type;
	short start_fcb;
	short start_fat;
};

struct dir_table
{
	dir_ele dirtab[80];
	int dirnum;
};
fcb* FCB[fatnum];
void init()
{

}*/