#include <stdio.h>
int isPrime(int n)
{
	int i= 0;
	if(n <= 1)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	for(i= 2; i*i<= n; i++){
		if(n% i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	scanf("%d" , &n);
	printf("%d\n", isPrime(n));
	printf("Hello World!");
	return 0;
}
