// 计算一个数的平方根。
#include <stdio.h>
#include <stdlib.h>

int main() {
	float new_guess;
	float last_guess;
	float number;

	// 催促用户输入，读取数据并对它进行检查。
	printf("Enter a number: ");
	scanf("%f", &number);
	if (number < 0) {
		printf("Cannot compute the square root of a " "negative number! \n");
		return EXIT_FAILURE;
	}

	// 计算平方根的近似值，直到它的值不再变化。
	new_guess = 1;
	do {
		last_guess = new_guess;
		new_guess = (last_guess + number / last_guess) / 2;
		printf("%.15e\n", new_guess);
	} while (new_guess != last_guess);

	// 打印结果
	printf("Square root of %g is %g\n", number, new_guess);
	return EXIT_SUCCESS;
}

//自定义一个函数，实现strcpy()函数的功能
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
	memset(strDest, 0, STR_LEN);  // 将strDest指向的内存全部设置为 NUL

	printf("strDest = %s\n", strDest);
	myStrcpy(strDest, strSrc);
	printf("strDest = %s\n", strDest);
	return 0;
}

//将一个正整数分解质因数
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;  // 用户输入的整数
	int i;  // 循环标志

	printf("输入一个整数：");
	scanf("%d", &n);
	printf("%d=", n);

	// n>=2才执行下面的循环
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

//求某一年的某一月有多少天
#include <stdio.h>
#include <stdlib.h>

void main(){
	int year, month, days;

	printf("输入年份：");
	scanf("%d", &year);
	printf("输入月份：");
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
		// 判断闰年
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			days = 29;
		}
		else {
			days = 28;
		}
		break;
	default:
		printf("月份输入错误！\n");
		exit(1);
		break;
	}
	system("pause");
	printf("天数：%d\n", days);
}

//百元买百鸡的问题
#include <stdio.h>

int main() {
	int i, j, k;

	printf("百元买百鸡的问题所有可能的解如下：\n");

	for (i = 0; i <= 100; i++){
		for (j = 0; j <= 100; j++) {
			for (k = 0; k <= 100; k++) {
				if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 100) {
					printf("公鸡 %2d 只，母鸡 %2d 只，小鸡 %2d 只\n", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}