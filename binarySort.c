#include<stdio.h>

int binarySort(int array[] ,int len,int value){
	int low,high,middle;
	low = middle =0;
	high = len-1;
	printf("high =%d",high);
	printf("high =%d",array[high]);
	while(low <= high){
		middle = (low+high)/2;
		if(value == array[middle])
			return middle;
		else if(value >array[middle])
			low = middle+1;
		else
			high = middle-1;
	}
	return -1;
}

int main(){
	int a[] = {1,4,5,6,7,89,3434,34345};
	printf("re = %d\n",binarySort(a,sizeof(a)/sizeof(a[0]),89));
	printf("re = %d\n",binarySort(a,sizeof(a)/sizeof(a[0]),67));
	return 0;
}
