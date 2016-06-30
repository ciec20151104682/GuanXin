#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()

{
	void *malloc(size_t size);
	char*str;
	str=(char*)malloc(sizeof(char));
	FILE*fp=fopen("export.gpx","r");
	int n;
	if(fp==NULL)
	{
		printf("wrong!");
		return-1;
	}	
	else
	{
		while(fscanf(fp,"%s %d ",str,&n)!=EOF)
		{
			printf("%s %d \n",str,n);
		}
		fclose(fp);
		free(str);
	}
	return 0;
}
