#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
}Users;
void input(Users* users);
void output(Users* users,int i);
void save(Users* users,FILE* file);
void mysort(FILE* file,int sel);
void randdat(Users* users);
int cmp(const void *a ,const void *b);
int cmp1(const void *a ,const void *b);
