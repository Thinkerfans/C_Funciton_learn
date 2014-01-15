#include<stdio.h>
#include<string.h>

int mytolower(int c){
	if('A'<=c && 'Z'>=c)
		return c-32;
	return c;
}

int mytolower2(int c){
	if('A'<=c && 'Z'>=c)
		return c-('Z'-'A');
	return c;
}
int main(){
	char s1[] = "3489 #$!@$# ASDFDF adfdf +-*/";
	int i=0;
	for(;i<strlen(s1);i++){
		s1[i] = mytolower2(s1[i]);
	}
	printf("s1=%s",s1);
	return 0;
}
