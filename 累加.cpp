// 累加.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a,n;
	a=0;
	for(n=1;n<=100;n++)
	{
		a=a+n;
	}
	printf("%d",a);
	return 0;
}

