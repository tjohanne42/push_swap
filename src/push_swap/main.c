#include "push_swap.h"

int		main(int argc, char **argv)
{
	int			i;
	int			*tab_a;
	int			*tab_b;
	intmax_t	temp;
	t_size		size;

	// checking arg
	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!check_nb(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	// put nombres in tab
	i = 1;
	if (!(tab_a = malloc(sizeof(*tab_a) * (argc - 1))))
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (i < argc)
	{
		// looking for the value to be in a int
		temp = ft_atoimax(argv[i]);
		if (temp > INT_MAX)
		{
			free(tab_a);
			ft_putstr("Error\n");
			return (0);
		}
		else if (temp < INT_MIN)
		{
			free(tab_a);
			ft_putstr("Error\n");
			return (0);
		}
		tab_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	// checking double
	if (!check_double(tab_a, argc))
	{
		free(tab_a);
		ft_putstr("Error\n");
		return (0);
	}
	if (!(tab_b = malloc(sizeof(*tab_b) * (argc - 1))))
	{
		free(tab_a);
		ft_putstr("Error\n");
		return (0);
	}
	size.a = argc - 1;
	size.b = 0;
	size.moves = 0;
	push_swap_algo(&tab_a, &tab_b, &size);
	free(tab_a);
	free(tab_b);
	return (0);
}
