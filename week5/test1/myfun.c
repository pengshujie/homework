#include"my.h"
void input(Users* users)
{
        printf("输入id:\n");
	scanf("%d",&users->id);
	printf("输入姓名:\n");
        scanf("%s",users->name); 
	printf("输入手机号:\n");
        scanf("%s",users->htel); 
	printf("输入电话号码:\n");
        scanf("%s",users->tel);
}


void output(Users* users,int i)
{
	printf("userid\tname\thtel\ttel\n");
	for(int j = 0;j<i;j++)
	{	
        	printf("%d\t",users[j].id);
		printf("%s\t",users[j].name);
        	printf("%s\t",users[j].htel);
		printf("%s\n",users[j].tel);
	}
}


void save(Users* users,FILE* file)
{
	int isExist = 0;
	Users *user = (Users*)malloc(sizeof(Users));
	fseek(file,0,SEEK_SET);
	while(!feof(file))
	{
		fscanf(file,"%d\t%s\t%s\t%s\n",&user->id,user->name,user->htel,user->tel);
		if(users->id == user->id)
			isExist = 1;
	}
	free(user);
	if(!isExist)
		fprintf(file,"%d\t%s\t%s\t%s\n",users->id,users->name,users->htel,users->tel);
	else
		printf("id已存在\n");
}



void mysort(FILE* file,int sel)
{
	int i=0;
	Users *user = (Users*)malloc(sizeof(Users));
	fscanf(file,"%d\t%s\t%s\t%s\n",&user->id,user->name,user->htel,user->tel);
	i++;
	for(i;!feof(file);i++)
	{
		fscanf(file,"%d\t%s\t%s\t%s\n",&user->id,user->name,user->htel,user->tel);
	}
	free(user);

	fseek(file,0,SEEK_SET);
	Users *users = (Users*)malloc(sizeof(Users)*i);			
	fscanf(file,"%d\t%s\t%s\t%s\n"
		,&users[0].id,users[0].name,users[0].htel,users[0].tel);
	for(int j=1;j<i;j++)
	{
		fscanf(file,"%d\t%s\t%s\t%s\n"
			,&users[j].id,users[j].name,users[j].htel,users[j].tel);
	}
	if(sel==1)
	qsort(users,i,sizeof(Users),cmp);
	else
	qsort(users,i,sizeof(Users),cmp1);
	output(users,i);
}


void randdat(Users* users)
{
	static int isSrand = 0;
	if(!isSrand){
		srand(time(0));
		isSrand = 1;
	}
	users->id = rand(); 
	int len = rand() % 8;
	if(len < 2){ len = 2;}
	int i;
	for(i = 0; i < len; i++)
	{
	 users->name[i] = 'a' + (rand() % 26);
	}
	users->name[0] += ('A' - 'a');
	for(i = 0; i < 11; i++)
	{
		users->htel[i] = rand() % 10 + '0';
		users->tel[i] = rand() % 10 + '0';
	} 
	users->htel[4] = '-';
	users->tel[0] = '1';
	/*if(users->id<0&&users->id>4294967295)
	{
		printf("用户id不符合规则\n");
		return 0;
	}
	for(int i=0;i<8;i++)
	{
		if(i==0&&users->name[0]<'A'||users->name[0]>'Z')
		{
			printf("用户name首字母未大写\n");
			return 0;
		}
		if(users->name[i]!='\0'&&i>0&&users->name[i]<'a'||
users->name[i]>'z')
		{
			printf("用户name后面字母未小写\n");
			return 0;
		}
	}
	return 1;*/
}


int cmp(const void *a ,const void *b)
{
	return strcmp((*(Users*)a).name,(*(Users*)b).name);
}
int cmp1(const void *a ,const void *b)
{
	return -1*strcmp((*(Users*)a).name,(*(Users*)b).name);
}
