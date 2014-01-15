#include<stdio.h>
#include<string.h>
int main(){
	char * s = "hello,world,world";
	char * s1 = "world";
	char *p = strstr(s,s1);
	if(p)
		printf("%s\n",p);
	else
		printf("no find\n");
	return 0;
}
