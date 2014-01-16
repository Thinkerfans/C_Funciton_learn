#include<stdio.h>
#include<string.h>
char * mystrset(char * s,char c){
	if(NULL == s)
		return NULL;
	char * tem = s;
	while(*tem)
		*tem++ = c;
	return s;

}

int main(){
	char s[] = "hell,world";
	printf("%s\n",s);
	printf("%s\n",mystrset(s,1));
	printf("%s\n",mystrset(s,'A'));
	printf("%s\n",mystrset(s,'#'));
	return 0;
}
