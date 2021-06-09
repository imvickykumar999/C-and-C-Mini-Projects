#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DATA_SIZE 1000

int main(){
char key[32][12]={"int","char","while","for","if","else"};
int cnt =0,i;
char ch[100], data[DATA_SIZE];
FILE *fp=fopen("keyword.c","w");
//to check whether file exists or not
if( fp ==NULL) {
printf("unable to create the file..\n");
exit(0);
/* Input contents from user to store in file */
//printf("Enter contents to store in file : \n");
//fgets(data, DATA_SIZE, stdin);
/* Write data to file */
fputs("int while", fp);
fclose(fp);
FILE *fp1=fopen("keyword.c","r");
//to extract the word till it don't reach the end of file
while((fscanf(fp1,"%s",ch))!=EOF){
//compare the keyword with the word present in the file.
for(i=0;i<32;i++) {
// compare the keyword with the string in ch.
if(strcmp (key[i],ch)==0) {
//just to check which keyword is printed.
printf("\n keyword is : %s",ch);
cnt++;
}
}
}
printf("\n Total no. of keywords are : %d", cnt);
fclose(fp1);
return 0;

}}
