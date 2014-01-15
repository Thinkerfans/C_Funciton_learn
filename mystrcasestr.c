#include<stdio.h>
#include<string.h>

char * mystrcasestr(const char * ,const char *);
char * mystrcasestr2(const char * ,const char *);

char * mystrcasestr(const char * src,const char * find){
	if(NULL == src || NULL == find)
		return NULL;
	char * cp =  (char *) src;
	char * s1 , * s2;
	while(*cp){
		s1 = cp;
		s2 = (char * )find;
		while(*s2 && *s1 && !(tolower(*s1) - tolower(*s2)))
			s1++,s2++;
		if(!(*s2))
			return cp;
		cp++;
	}
	
	return NULL;
}
char * mystrcasestr2(const char * src,const char * find){
	if(NULL == src || NULL == find)
		return NULL;
	char * cp =  (char *) src;
	char * s1 , * s2;
	while(*cp){
		s1 = cp;
		s2 = (char * )find;
		while(*s2 && *s1 && (*s1 == *s2|| *s1 -*s2 ==32 || *s1 -*s2 == -32))
			s1++,s2++;
		if(!(*s2))
			return cp;
		cp++;
	}
	
	return NULL;
}


int main(){
	char * src = "HeLlO, china and hello,world";

	char * find = ",";
	char * re = mystrcasestr(src,find);
	if(re)
		printf("%s\n",re);
	else
		printf("no find\n");
	re = NULL;

	re = mystrcasestr2(src,find);
	if(re)
		printf("%s\n",re);
	else
		printf("no find\n");	
	return 0;
	return 0;
}
