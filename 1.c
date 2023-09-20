#include <fentl.h>
#include <unistd.h>
#include<stdio.h>
main(int argc.char *argv[])
{
FILE *fp;
char ch;
int sc=0;


fp=fopen(argv[1]);
else
{
	while(!fefo(fp))
	{
	ch=fget(fp);
	if(ch=='')
	sc++;
	}
	printf("no of spaces %d",sc);
	printf("\n");
	fclose(fp);
	}
}
