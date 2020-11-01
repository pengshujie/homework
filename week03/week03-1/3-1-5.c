#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(void){
	int fd;
	FILE *file;
	fd = open("./test.txt",O_RDWR);
	file = fdopen(fd,"w+");
	fprintf(file,"test data %s","hello");
	fclose(file);
	close(fd);
	return 0;
}
