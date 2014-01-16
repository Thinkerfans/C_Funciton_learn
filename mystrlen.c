#include<stdio.h>
#include<string.h>
int mystrlen(const char * s){
	if(NULL == s)
		return 0;
	char * tem = (char *) s;
	while(*tem++);
		//tem++;
	return tem-s-1;
}
int mystrlen2(const char * s){
	if(NULL == s)
		return 0;
	char * tem = (char *) s;
	while(*tem)
		tem++;
	return tem-s;
}
int main(){
	char * s = "12";
	printf("len=%d",mystrlen(s));
	
}
