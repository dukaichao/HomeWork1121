#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Tabuada(){
	printf("乘法表->\n");
	for (int i = 1; i < 10; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d = %-3d", i, j, (i*j));
		}
		printf("\n");
	}
	printf("\n");
}
void leap(){
	printf("闰年->\n");
	int i = 0;
	for (i = 1000; i <= 2000; i++){
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			printf("%d ", i);

	}
	printf("\n");
}
void prime(){
	printf("素数->\n");
	int i = 0;
	int j = 0;
	for (i = 100; i < 201; i++){
		for (j = 2; j < sqrt(i); j++){
			if (i%j == 0)
				break;
		}
		if (j > sqrt(i))
			printf("%d ", i);
	}
	printf("\n");
}
int main(){
	//素数判断
	prime();
	//闰年
	leap();
	//乘法表
	Tabuada();
	system("pause");
	return 0;
}