#include <stdio.h>

int main()
{
	int sec;
	int hh, mm, ss;

	printf("Enter sec: ");
	scanf("%d",&sec);
	hh=20000/3600;
	mm=20000%3600/60;
	ss=20000%60;
    printf("%d seconds \ %02d:%02d:%02d.\n",sec , hh, mm, ss); 




}

