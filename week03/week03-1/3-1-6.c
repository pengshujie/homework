#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(void){
	FILE *file1;
	file1 = fopen("test.txt","r");
	FIlE *file2;
	file2 = freopen("test.txt","w",file1);
	fputs("hello"i);
	fclose(file2);
	return 0;
}
