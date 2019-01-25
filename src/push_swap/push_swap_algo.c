#include "push_swap.h"

static void		algo_simple(int **tab_a, int **tab_b, t_size *size)
{
	while (tab_sorted(tab_a, size) == 0)
	{
		while (size->a > 1)
		{
			if (tab_a[0][0] > tab_a[0][1])
				sa(tab_a, size, "");
			pb(tab_a, tab_b, size, "");
			if (size->b > 1 && tab_b[0][0] < tab_b[0][1])
				sb(tab_b, size, "");
		}
		while (size->b > 0)
		{
			if (size->b > 1 && tab_b[0][0] < tab_b[0][1])
				sb(tab_b, size, "");
			pa(tab_a, tab_b, size, "");
			if (tab_a[0][0] > tab_a[0][1])
				sa(tab_a, size, "");
		}
	}
}

void			push_swap_algo(int **tab_a, int **tab_b, t_size *size)
{
	algo_simple(tab_a, tab_b, size);
}
