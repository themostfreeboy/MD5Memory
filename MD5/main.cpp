#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#include "md5.h"

int main(int argc, char *argv[])
{
	unsigned char x[6] = "admin";
	unsigned char y[16];//21232f297a57a5a743894a0e4a801fc3
	printf("ָ���Ĳ����ַ���:admin\n");
	MD5Calc(x, y);
	MD5Print(y);
	printf("���½����ֶ���ѭ������:\n");
	while (1)
	{
		char temp[200];
		printf("��������Ե��ַ���:");
		gets_s(temp);
		MD5Calc((unsigned char*)temp, y);
		MD5Print(y);
	}
    return 0;
}