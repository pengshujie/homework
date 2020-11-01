#include"ch03.h"
int main(void)
{
	int n=3;
	int lens[3]={1,2,1};
	int content[4]={1,5,6,7};
	FILE *file = fopen("records.txt","rw+");
       	fwrite(&n,sizeof(int),1,file);
	fwrite(lens,sizeof(int),3,file);	
	fwrite(content,sizeof(int),4,file);
	fclose(file);
	return 0;
}
