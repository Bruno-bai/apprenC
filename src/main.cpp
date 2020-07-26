
#include<stdio.h>

#include<string.h>

 

int main(){

	char str[5]={'1','2','3','4','5'};

	

	printf("原始字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",str[i]);

	printf("\n");

	char *a = new char[5];
	char **b = new char*[3];
	for (int i = 1; i < 3; i++){
		*b = new char[5];
	}
	for (int j = 1; j < 3; j++){
		memcpy(b[j], str, sizeof(str));
	}


	printf("初始化后的字符数组:");

	for(int i=0;i<5;i++)

		printf("%s ",b[i]);
	
	delete []a;
	a = NULL;

		

	return 0;

}
