#include"my.h"
void input()
{
	struct user u;
	FILE* file = fopen("user.dat","a+");
        printf("输入id:\n");
	scanf("%d",&u.id);
	printf("输入姓名:\n");
        scanf("%s",u.name); 
	printf("输入手机号:\n");
        scanf("%s",u.htel); 
	printf("输入电话号码:\n");
        scanf("%s",u.tel);
	fwrite(&u,sizeof(struct user),1,file);
	/*fwrite(&u.id,sizeof(u.id),1,file);
	fwrite(u.name,sizeof(u.name),1,file);
	fwrite(u.htel,sizeof(u.htel),1,file);
	fwrite(u.tel,sizeof(u.tel),1,file);*/
	fclose(file);	
}
void output()
{
	struct user u;
	FILE* file = fopen("user.dat","r");
	printf("userid\tname\thtel\ttel\n");
	fread(&u,sizeof(struct user),1,file);
	while(!feof(file))
	{
        	printf("%d\t",u.id);
	        printf("%s\t",u.name);
        	printf("%s\t",u.htel);
        	printf("%s\n",u.tel);
		fread(&u,sizeof(struct user),1,file);
	}
}
