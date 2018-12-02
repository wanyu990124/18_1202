// ����һ������ƽ������
#include <stdio.h>
#include <stdlib.h>

int main() {
	float new_guess;
	float last_guess;
	float number;

	// �ߴ��û����룬��ȡ���ݲ��������м�顣
	printf("Enter a number: ");
	scanf("%f", &number);
	if (number < 0) {
		printf("Cannot compute the square root of a " "negative number! \n");
		return EXIT_FAILURE;
	}

	// ����ƽ�����Ľ���ֵ��ֱ������ֵ���ٱ仯��
	new_guess = 1;
	do {
		last_guess = new_guess;
		new_guess = (last_guess + number / last_guess) / 2;
		printf("%.15e\n", new_guess);
	} while (new_guess != last_guess);

	// ��ӡ���
	printf("Square root of %g is %g\n", number, new_guess);
	return EXIT_SUCCESS;
}

//�Զ���һ��������ʵ��strcpy()�����Ĺ���
#include <stdio.h>
#include <string.h>

#define STR_LEN 30

char *myStrcpy(char *strDest, const char *strSrc) {
	if (strDest == NULL || strSrc == NULL) {
		return NULL;
	}
	if (strDest == strSrc) {
		return strDest;
	}
	char *tempptr = strDest;
	while ((*strDest++ = *strSrc++) != '\0');
	return tempptr;
}


int main(void) {
	char *strSrc = "http://www.coderbbs.com";
	char strDest[STR_LEN];
	memset(strDest, 0, STR_LEN);  // ��strDestָ����ڴ�ȫ������Ϊ NUL

	printf("strDest = %s\n", strDest);
	myStrcpy(strDest, strSrc);
	printf("strDest = %s\n", strDest);
	return 0;
}

//��һ���������ֽ�������
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;  // �û����������
	int i;  // ѭ����־

	printf("����һ��������");
	scanf("%d", &n);
	printf("%d=", n);

	// n>=2��ִ�������ѭ��
	for (i = 2; i <= n; i++) {
		while (n != i) {
			if (n%i == 0) {
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d\n", n);
	system("pause");
	return 0;
}

//��ĳһ���ĳһ���ж�����
#include <stdio.h>
#include <stdlib.h>

void main(){
	int year, month, days;

	printf("������ݣ�");
	scanf("%d", &year);
	printf("�����·ݣ�");
	scanf("%d", &month);

	switch (month) { 
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	case 2:
		// �ж�����
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			days = 29;
		}
		else {
			days = 28;
		}
		break;
	default:
		printf("�·��������\n");
		exit(1);
		break;
	}
	system("pause");
	printf("������%d\n", days);
}

//��Ԫ��ټ�������
#include <stdio.h>

int main() {
	int i, j, k;

	printf("��Ԫ��ټ����������п��ܵĽ����£�\n");

	for (i = 0; i <= 100; i++){
		for (j = 0; j <= 100; j++) {
			for (k = 0; k <= 100; k++) {
				if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 100) {
					printf("���� %2d ֻ��ĸ�� %2d ֻ��С�� %2d ֻ\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}