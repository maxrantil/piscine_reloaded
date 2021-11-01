#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;
	int len;

	i = 0;
	len = max - min;
	if (min >= max)
		return 0;
	arr = (int *)malloc(sizeof (int) * len);
	if (arr)
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
	return arr;
}

int	main(void)
{
	int i = 0;
	int a = 25;
	int b = 33;
	int *range = ft_range(a, b);

	while (a < b)
	{
		printf("range is: %d\n", range[i++]);
		a++;
	}
	free(range);
	return 0;
}

