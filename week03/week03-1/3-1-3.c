#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(void){
	FILE *file = fopen("./ftest.txt","w+");
	char buf[80];
	memset(buf,'1',sizeof(buf));
	printf("%s\n",buf);
	fgets(buf,sizeof(buf),stdin);
	printf("%s",buf);
	fputs(buf,file);
	//printf("file descriptor = %d\n",fd);
	fclose(file);
	return 0;
}
