#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main1(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int n;
	printf("������Ҫ���ҵ���:");
	scanf("%d", &n);
	while (left <= right){
		int middle = (left + right) / 2;
		if (n == arr[middle]) {
			printf("�ҵ���,");
			printf("�±�Ϊ%d\n", middle);
			break;
		}
		else if (n > arr[middle]) {
			left = middle + 1;
		}
		else right = middle - 1;
	}
	printf("δ�ҵ�!\n");
	system("pause");
	return -1;
}


int main()
{
	char str[] = "123456";
	char arr[10];
	int i;
	for (i = 1; i<4; i++){
		printf("passward:");
		scanf("%s", &arr);
		if (strcmp(arr, "123456")==0){
			printf("��½�ɹ�\n"); 
			break;
		}else{
			printf("�����������������,�㻹��%d�λ���\n",3-i);
			if (i == 3)
				printf("�˳���¼!\n");
		}
	}
	system("pause");
	return 0;
}


char bigLetter(char x){
	return x >= 'A'&&x <= 'Z';
}
char smallLetter(char x){
	return x >= 'a'&&x <= 'z';
}
char number(char x){
	if (x >= '0'&&x <= '9');
	return 0;
}
char other(char x){
	return x;
}
int main2(){
	while (1){
		char x = getchar();
		if (bigLetter(x)){
			putchar(x + 32);
		}
		else if (smallLetter(x)){
			putchar(x - 32);
		}
		else if(number(x)){
			printf("");//do nothing
		}else{
			putchar(other(x));
		}
	}
	system("pause");
	return 0;
}
