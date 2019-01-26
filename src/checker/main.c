#include "push_swap.h"

static void			push_swap_get_output(int **tab_a, int **tab_b, t_size *size, char c)
{
	char		*line;

	while (get_next_line(0, &line) > 0)
	{
		if (!ft_strcmp(line, "sa"))
			sa(tab_a, size, c);
		else if (!ft_strcmp(line, "sb"))
			sb(tab_b, size, c);
		else if (!ft_strcmp(line, "ss"))
			ss(tab_a, tab_b, size, c);
		else if (!ft_strcmp(line, "pa"))
			pa(tab_a, tab_b, size, c);
		else if (!ft_strcmp(line, "pb"))
			pb(tab_a, tab_b, size, c);
		else if (!ft_strcmp(line, "ra"))
			ra(tab_a, size, c);
		else if (!ft_strcmp(line, "rb"))
			rb(tab_b, size, c);
		else if (!ft_strcmp(line, "rr"))
			rr(tab_a, tab_b, size, c);
		else if (!ft_strcmp(line, "rra"))
			rra(tab_a, size, c);
		else if (!ft_strcmp(line, "rrb"))
			rrb(tab_b, size, c);
		else if (!ft_strcmp(line, "rrr"))
			rrr(tab_a, tab_b, size, c);
		free(line);
	}
	free(line);
	
}

int					main(int argc, char **argv)
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
	// creating tab_a
	if (!(tab_a = malloc(sizeof(*tab_a) * (argc - 1))))
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = 1;
	// put nb from argv to tab_a
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
	// creating tab_b
	if (!(tab_b = malloc(sizeof(*tab_b) * (argc - 1))))
	{
		free(tab_a);
		ft_putstr("Error\n");
		return (0);
	}
	// initializing t_size size value
	size.a = argc - 1;
	size.b = 0;
	size.moves = 0;
	// get output from push_swap and making instructions
	// last parameter is a string, if the string == "mute" that wouldn't show the moves
	push_swap_get_output(&tab_a, &tab_b, &size, 'm');
	// checking if tab is sorted
	if (tab_sorted(&tab_a, &size) != 0)
		ft_putstr("OK :D\n");
	else
		ft_putstr("KO D:\n");
	ft_putstr("size.moves = ");
	ft_putnbr(size.moves);
	ft_putchar('\n');
	free(tab_a);
	free(tab_b);
	return (0);
}
