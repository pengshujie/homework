#include"ch03.h"
int main()
{
	int n,k;
	int lens[100];
	int content[100];
	int x=0;
	FILE *fp=fopen("records.txt","r");
	
	scanf("%d",&k);
	fread(&n,sizeof(int),1,fp);
	fread(lens,sizeof(int),n,fp);
	for(int i=0;i<k-1;i++)
	{
		x=x+lens[i];
	}
	fseek(fp,sizeof(int)*(n+1+x),SEEK_SET);
	fread(content,sizeof(int),lens[k-1],fp);
	for(int i=0;i<lens[k-1];i++)
	{
		printf("%d",content[i]);
	}
	return 0;
}

