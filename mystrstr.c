#include<stdio.h>
#include<string.h>

char * mystrstr(const char * ,const char *);

char * mystrstr(const char * src,const char * find){
	if(NULL==src || NULL == find)
		return NULL;
	
	char * cp =  (char *)src;
	char * s1, * s2;
	
	while(*cp){
		s1 = cp;
		s2 = (char *) find;
		while(*s1 && *s2 && (*s1 == *s2))
			s1++,s2++;
		if(!*s2)
			return cp;

		cp ++;	
	}
	
	return NULL;
}


int main(){
	char * src = "hello, china and hello,world";
	char * find = ",";
	char * re = mystrstr(src,find);
	if(re)
		printf("%s\n",re);
	else
		printf("no find\n");	
	return 0;
}
