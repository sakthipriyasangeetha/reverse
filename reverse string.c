#include<stdio.h>
#include<string.h>
#define MAX 100
void reverseContent(char*x)
{
	FILE*fp=fopen(x,"a");
	if(fp==NULL)
	{
		printf("unable to open the file\n");
		return;
	}
	char buf[100];
	int a[MAX],s=0,c=0,I;
		fprintf(fp,"\n");
		rewind(fp);
		while(!feof(fp))
		{
			fgets(buf,sizeof(buf),fp);
			I=strlen(buf);
			a[s]+=I;
		}
		rewind(fp);
		c=-1;
		while(c>=0)
		{
			printf("MY caption");
			
		}
