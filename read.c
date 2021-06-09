
// C program to Append a Character to a String 
//
//#include <stdio.h> 
//#include <string.h> 
//
//int main() 
//{ 
//	// declare and initialize string 
//	char str[] = "Geek"; 
//
//	// declare and initialize char 
//	char ch = 's'; 
//
//	// print string 
//	printf("Original String: %s\n", str); 
//	printf("Character to be appended: %c\n", ch); 
//
//	// append ch to str 
//	strncat(str, &ch, 1); 
//
//	// print string 
//	printf("Appended String: %s\n", str); 
//
//	return 0; 
//} 



#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>
 
int main() 
{ 
	char * filename = "access modifier in class.cpp"; 
	FILE * fp = fopen(filename, "r");
	FILE * kout = fopen("keyword.txt", "w");
	FILE * iout = fopen("identifier.txt", "w");
 
	if (fp == NULL)
		return 1; 
		
	char c; 
	int k, result, count = 0; 
	char str[10];
	
	char keywords[][10] = {"auto", "break", "case", "char", "const", "continue", "default",
				"do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int",
				"long", "register", "return", "short", "signed", "sizeof", "static", "struct",
				"switch", "typedef", "union", "unsigned", "void", "volatile", "while"};

	while((c = fgetc(fp)) != EOF) 
	{ 
		if(c == ' ' || c == '\n') 
		{ 
			++count; 
			printf("%d). %s\n", count, str);
			
			for(k=0; k<32; k++)
			{
				result = strcmp(keywords[k], str);
				
				if (result == 0)
					break;
			}
			
			if (result == 0)
				fprintf(kout, "%s\n", str);
			else
				fprintf(iout, "%s\n", str);
	
			strcpy(str,"");
		} 
		else 
		{ 
			if (isalpha(c) && c!=' ')
				strncat(str, &c, 1);
		} 
	} 
	
	fclose(fp); 
 	fclose(kout);

	printf("\n\t...this file has %d words in it.", count); 
	return 0; 
} 


//#include<stdio.h>
//#include<conio.h>
//#include<ctype.h>

//void main()
//
//{
//	char a[10];
//	int flag, i=1;
//	clrscr();
//	
//	printf("\n Enter an identifier:");
//	gets(a);
//	
//	if(isalpha(a[0]))
//		flag=1;
//	else
//		printf("\n Not a valid identifier");
//	
//	while(a[i]!='\0')
//	{
//		if(!isdigit(a[i])&&!isalpha(a[i]))
//		{
//			flag=0;
//			break;
//		}
//		
//		i++;
//	}
//	
//	if(flag==1)
//		printf("\n Valid identifier");
//	
//	getch();
//}

//int main()
//{
//	char string[60];
//	
//	  FILE *fp;
//	  char filename[20];
//	  printf("File to open: \n", &filename );
//	  gets(filename);
//	  fp = fopen(filename, "r");  /* open file for input */
//	
//	  if (fp)  /* If no error occurred while opening file */
//	  {           /* input the data from the file. */
//	    fgets(string, 60, fp); /* read the name from the file */
//	    string[strlen(string)] = '\0';
//	    printf("The name read from the file is %s.\n", string );
//	  }
//	  else          /* If error occurred, display message. */
//	  {
//	    printf("An error occurred while opening the file.\n");
//	  }
//	  fclose(fp);  /* close the input file */
//	
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	FILE *in = fopen("access modifier in class.cpp","r");
//	char c, check[10];
//	int result;
//	
//	char keywords[][10] = {"auto", "break", "case", "char", "const", "continue", "default",
//				"do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int",
//				"long", "register", "return", "short", "signed", "sizeof", "static", "struct",
//				"switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
//				
////	while((c=fgetc(in))!=EOF)
////		putchar(c);
//			
//	printf("\nEnter a string : ");
//	scanf("%s", &check);
////	check = "auto";
//
//	result = strcmp(keywords[0], check);
//	if (result == 0)
//		printf("%d", result);
//	else
//		printf("Not same...\n");
//
//	fclose(in);
//	return 0;
//}



//#include <stdio.h>
//
//#define BUZZ_SIZE 1024
//
//int main(int argc, char **argv)
//{
//    char buff[BUZZ_SIZE];
//    FILE *f = fopen("access modifier in class.cpp", "r");
//    fgets(buff, BUZZ_SIZE, f);
//    printf("String read: %s\n", buff);
//    fclose(f);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
//    int result;
//
//    // comparing strings str1 and str2
//    result = strcmp(str1, str2);
//    printf("strcmp(str1, str2) = %d\n", result);
//
//    // comparing strings str1 and str3
//    result = strcmp(str1, str3);
//    printf("strcmp(str1, str3) = %d\n", result);
//
//    return 0;
//}
