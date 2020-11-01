#include"ch03.h"
int main(){
	int fd;
	if((fd=open("myoutput",O_WRONLY|O_CREAT))<0)
		err_exit("myoutput");
	fd = dup(1);
	printf("123456");
	close(fd);
	return 0;
}
