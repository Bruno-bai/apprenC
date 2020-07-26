
#include<stdio.h>

#include<string.h>

 

int main(){

	char str[5]={'1','2','3','4','5'};

	

	printf("原始字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",str[i]);

	printf("\n");

	

//	内存初始化 

	memset(str,'\0',5);

	

	printf("初始化后的字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",str[i]);

		

	return 0;

}
