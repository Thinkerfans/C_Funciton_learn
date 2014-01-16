#include<stdio.h>
#include<string.h>
int mystrlen(const char * s){
	if(NULL == s)
		return 0;
	char * tem = (char *) s;
	while(*tem)
		tem++;
	return tem-s;
}
int main(){
	char * s = NULL;
	printf("len=%d",strlen(s));
	
}
