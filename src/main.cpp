
#include<stdio.h>

#include<string.h>

 

int main(){

	char str[5]={'1','2','3','4','5'};

	

	printf("原始字符数组:");

	for(int i=0;i<5;i++)

		printf("%c ",str[i]);

	printf("\n");

	char **b = new char*[3];
	for (int i = 1; i < 3; i++){
		b[i] = new char[5];
	}
	for (int j = 1; j < 3; j++){
		memcpy(b[j], str, 5);
	}

	printf("初始化后的字符数组:");

	for(int i=0;i<5;i++)
		printf("%s ", *b);

	for(int k = 1; k<3; k++)
		delete [] b[k];
	delete []b;

		

	return 0;

}
