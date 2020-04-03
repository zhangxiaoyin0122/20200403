#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i;
	scanf("%d", &n);
	int arr[50];
	for ( i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int v;
	scanf("%d", &v);
	for ( i = 0; i < n; i++) {
		if (v < arr[i]) {                  //1 2 4 5 6
			for (int j = n; j > i;j--) {   //0 1 2 3 4
				arr[j] = arr[j - 1];
			}
			break;
		}
	}
	arr[i] = v;
	for (int i = 0; i < n + 1; i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}
//由年月日分别输出
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a[5], b[3], c[3];
	scanf("%4s%2s%2s", a, b, c);
	printf("year=%s\n", a);
	printf("month=%s\n", b);
	printf("date=%s\n", c);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char n;
	while (~scanf("%c", &n)) {
		getchar();
		if ((('A' <= n) && (n <= 'Z') )|| (('a' <= n) && (n <= 'z'))) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
#include <stdio.h>
int main() {
	float n, b;
	scanf("%f %f", &n, &b);
	if (((n / (b * b)) >= 18.5) && ((n / (b *b)) <= 23.9))
		printf("Normal\n");
	else
		printf("Abnormal\n");
		return 0;
}
#include <stdio.h>
int main() {
	//12345
	for (int i = 10000; i < 100000; i++) {
		if ((i / 10000)*(i % 10000) + (i / 1000)*(i % 1000) + (i / 100)*(i % 100) + (i / 10)*(i % 10) == i) {
			printf("%d ", i);
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, j, k;
	printf("水仙花是:\n");
	for (int n = 0; n < 1000; n++)
	{
		i = n / 100;
		j = n / 10 - i * 10;
		k = n % 10;
		if (n == i * i*i + j * j*j + k * k*k)
			printf("%d\n", n);
	};
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, i;
	int add = 0;
	int Sn = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		add = add * 10 + a;
		Sn = Sn + add;
	}
	printf("%d\n", Sn);
	system("pause");
	return 0;
}