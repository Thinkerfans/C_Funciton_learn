#include<stdio.h>
#include<string.h>

int mytoupper(int c){
	if('a'<=c && 'z'>=c)
		return c-32;
	return c;
}

int mytoupper2(int c){
	if('a'<=c && 'z'>=c)
		return c-('z'-'a');
	return c;
}
int main(){
	char s1[] = "3489 #$!@$# ASDFDF adfdf +-*/";
	int i=0;
	for(;i<strlen(s1);i++){
		//s1[i] = toupper(s1[i]);
		//s1[i] = mytoupper(s1[i]);
		s1[i] = mytoupper2(s1[i]);
	}
	printf("s1=%s",s1);
	return 0;
}
