#include<stdio.h>
#include<string.h>

char * mystrcpy(char * des,char * src){

	char * tem = des;
	while(*tem++ = *src++);
	return des;
}


int main(){
	char s[30] = "hello";
	char * s1 = ",world";
	printf("%s\n",mystrcpy(s,s1));
	printf("%s\n",strcpy(s,s1));
	return 0;
}
