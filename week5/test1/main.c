#include"myfun.c"
int main()
{
	Users *users;
	users = (Users*)malloc(sizeof(Users));
	FILE *file = fopen("user.dat","a+");
	//input(users);
	randdat(users);
	save(users,file);
	free(users);
	fclose(file);

	FILE *fp = fopen("user.dat","r");
	printf("按照名字升序（降序）排列输入1（0）");
	int sel = 0;
	scanf("%d",&sel);
	mysort(fp,sel);
	fclose(fp);
	return 0;
}
