#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void err_exit(char *s){
	printf("Usage: %s from-file to file\n",s);
	exit(1);
}
