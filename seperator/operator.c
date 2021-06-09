
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>
 
int main()
{
	char file[50]; 
	printf("Enter File name : "); 
	gets(file); 
	printf("\n");
	
	FILE * fp = fopen(file, "r");
	
	if (fp == NULL) 
	{
		printf("\n'%s' file not found...\n", file);
		getch();
		return 1;
	} 
		
	int k, result, count, kcount; 
	char c, str[10];
	kcount = count = 0;

	while((c = fgetc(fp)) != EOF) 
	{ 
		if(c == '+' || c == '-' || c == '%' || c == '*' || c == '/') 
			++count;
	} 
	
	fclose(fp); 

	printf("\n\t... file has %d operators in it.\n", count); 
	
    return 0;
}
