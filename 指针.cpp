#include<stdio.h>
#include<string.h>
#include<malloc.h>
char*extract(char*p[],int num)
{
	char*q=(char*)malloc(num*sizeof(char)+1);
	q[0]=0;
	char s[2];
	int i;
	for(i=0;i<num;i++)
	{
		strncpy(s,p[i],1);
		s[1]=0;
		strcat(q,s);
	}
	q[num]=0;
	return q;
}
int main() 
{
	char*p[]={"Have been your friends for a long time. ",
		"Always feel your passion for life." ,
		"People like your easy-going spirit. ",
		"People like your unique characters. ",
		"Yes, I really feel it's my great pleasure to be your friend."};
	int num=sizeof(p)/sizeof(char*);
	char*q=extract(p,num);
	printf("%s\n",q);
	return 0;
}
