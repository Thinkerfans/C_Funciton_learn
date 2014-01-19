#include<stdio.h>
#include<string.h>

char * mystrcat(char * des,char * src){

	char * tem = des;
	while(*tem) tem++;
	while(*tem++ = *src++);
	return des;
}


int main(){
	char s[30] = "hello";
	char * s1 = ",world";
	printf("%s\n",mystrcat(s,s1));
	printf("%s\n",strcat(s,s1));
	return 0;
}
