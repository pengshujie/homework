#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
struct user{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
} users;
void input();
void output();
