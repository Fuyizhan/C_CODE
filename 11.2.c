#include<stdio.h>

int main()
{
	char str[51];
	FILE* pf = fopen("D:\\£¡£¡£¡\\textdemo\\x64\\Debug\\textdemo.pdf", "rb");
	if(pf==NULL)
	{
		perror("D:\\£¡£¡£¡\\textdemo\\x64\\Debug\\textdemo.pdf");
		return 0;
	}
	fgets(str,51,pf);
	printf("%s",str);
	fclose(pf);
	pf = NULL;
	return 0;

}

