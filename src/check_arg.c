#include "push_swap.h"

size_t		check_double(int *tab, int argc)
{
	int			i;
	int			j;

	i = 0;
	while (i < argc - 2)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

size_t		check_nb(int argc, char **argv)
{
	int			i;
	int			j;
	size_t		num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		num = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			else if (num == 0)
				num = 1;
			j++;
		}
		if (num == 0)
			return (0);
		i++;
	}
	return (1);
}