#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main()
{
	int a, b, c;
	/*char oper;*/

	printf("Please enter a exoression\n");
	//scanf("%d %c %d", &a, &oper, &b);
	scanf_s("%d %d", &a, &b);
	switch (a)
	{
	case 1:
		c = add(a, b);
		break;
	case 2:
		c = sub(a, b);
		break;
	case 3:
		c = div(a, b);
		break;
	case 4:
		c = multi(a, b);
		break;

	}

	printf("Result : %d", c);
}

int add(int a, int b){
	int result = a + b;
	printf("a + b = %d", result);
	return result;
}

int sub(int a, int b) {
	int result = a - b;
	printf("a - b = %d", result);
	return result;

}

int div(int a, int b) {
	int result = a / b;
	printf("a / b = %d", result);
	return result;
}

int multi(int a, int b) {
	int result = a * b;
	printf("a * b = %d", result);
	return result;

}