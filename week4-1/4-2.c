#include"ch03.h"
char buf1[]="abcdefghij";
char buf2[]="0123456789";
int main(void){
	int fd;
	fd = open("file.hole",O_WRONLY|O_CREAT|O_APPEND,0644);
	write(fd,buf1,10);
	lseek(fd,40,SEEK_SET);
	write(fd,buf2,10);
	close(fd);
	return 0;
}
