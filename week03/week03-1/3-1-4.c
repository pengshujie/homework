#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(void){
	FILE *file = fopen("./ftest.txt","r");
	printf("fd=%d\n",file->_fileno);
	fclose(file);
	return 0;
}
