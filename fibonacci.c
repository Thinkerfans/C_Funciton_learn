#include<stdio.h>

int fb1(int n){
	if(n==0||n==1){
		return 1;
	}

	return fb1(n-1)+fb1(n-2);
}

int fb2(int n){

	int prev = 1,next = 1 ,temp = 2;
	for(int i = 2;i<= n;i++){
		temp = prev + next;
		prev = next;
		next = temp;

	}
	return temp;

}

int main(){
	int a = fb1(4);
	int b = fb2(4);
	printf("a=%d,b=%d",a,b);
}
