# include<stdio.h>
# include<math.h>

int reverse(int num)
{
	if (num=0)
		return((num % 10) * pow(10, (int)log10(num)) + reverse(num / 10));
	else
		return 0;
}
int main()
{
	int num;
	printf("Enter a number to reverse:\n");
	scanf("%d", &num);
	printf("Reverse of %d is %d\n", num, reverse(num));
	return 0;
}