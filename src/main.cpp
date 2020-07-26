
#include<stdio.h>

#include<string.h>

 

int main(){

	char str[5]={'1','2','3','4','5'};

	

	printf("原始字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",str[i]);

	printf("\n");

	char *a = new char[5];

	memcpy(a, str, sizeof(str));

	

	printf("初始化后的字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",a[i]);
	
	delete []a;
	a = NULL;

		

	return 0;

}
