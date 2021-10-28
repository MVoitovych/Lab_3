#include <stdio.h>

int main()
{
	int n, k, arr[50];
	printf("Array size :\n");
	scanf_s("%i", &n);
	printf("Enter elements of arry :\n");
	scanf_s("%i", arr);

	for (int i = 0; i < n - 1; i++)
	{
		scanf_s("%d", &k);
		if ((k == arr[i] + 1) && (i == n - 2))
		{
			printf("Null\n");
		}
		else if ((k == arr[i] + 1) && (i != n - 1))
		{
			arr[i + 1] = k;
		}
		else
		{
			printf("This element is : %i\n", k);
			break;
		}
	}
}