/* ************************************************************************** */
/*                                                                            */
/*                                                        :::         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while(i < size -1)
		{
			if(tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}

int main(void)
{
	int numArr[5] = {3, 2, 4, 5, 1};
	int size;

	size = 5;
	ft_sort_int_tab(numArr, size);
	printf("%d, %d, %d, %d,%d", numArr[0], numArr[1], numArr[2], numArr[3], numArr[4]);
	return(0);
}
