#include"ch03.h"
int main(){
	int fd;
	char buf[6] = {1,2,3,4,5,6};
	int i = 0;
	if((fd=open("file.hole.2",O_RDWR|O_CREAT|O_APPEND,0644))<0)
		err_exit("file.hole.2");
	while(i<6){
		write(fd,buf,1);
		sleep(1000);
	}
	close(fd);
	return 0;
}
