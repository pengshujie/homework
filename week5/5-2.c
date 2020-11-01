#include"ch05.h"
int y_or_n_ques(char* s)
{
	char answer;
	fputs(s,stdout);
	scanf("%c",&answer);
	if(answer == 'y')
		return 1;
	else
		return 0;
}
int main()
{
	int answer;
	printf("1:This is a buffer test program.");
	fflush(stdout);
	fprintf(stderr,"2: --test message\n");
	answer = y_or_n_ques("3: Hello, Are you a student?");
	if(answer == 1)
		printf("4: Hope you have high score.");
	else
		printf("4: Hope you have good salary.");
	fflush(stdout);
	fprintf(stderr,"5:bye!\n");
	while(1);
	return 0;
}
