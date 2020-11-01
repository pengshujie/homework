#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void){
	FILE *file = fopen("./ftest.txt","w+");
	//printf("file descriptor = %d\n",fd);
	fclose(file);
	return 0;
}
