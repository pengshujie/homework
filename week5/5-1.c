#include"ch05.h"
int main()
{
	char buf[BUFSIZ];/*8192*/
	setvbuf(stdout,buf,buf?_IOFBF:_IONBF,BUFSIZ);
	for(int i=0;i<9000;i++)
		printf("1");
	//fflush(stdout);
	while(1);
	return 0;
}
