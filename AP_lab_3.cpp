#include <stdio.h>

int main()
{
	int arraySize, firstInconsistentElement, plural[50];
	printf("Array size :\n");
	scanf_s("%i", &arraySize);
	printf("Enter elements of arry :\n");
	scanf_s("%i", &plural[0]); 
	for (int i = 0; i < arraySize - 1; i++)
	{
		scanf_s("%d", &firstInconsistentElement);
		if ((firstInconsistentElement == plural[i] + 1) && (i == arraySize - 2))
		{
			printf("Null\n");
		}
		else if ((firstInconsistentElement == plural[i] + 1) && (i != arraySize - 1))
		{
			plural[i + 1] = firstInconsistentElement;
		}
		else
		{
			printf("This element is : %i\n", firstInconsistentElement);
			break;
		}
	}
	return 0;
}
