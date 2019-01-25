#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"
#include "get_next_line.h"

typedef struct	s_size
{
	int			a;
	int			b;
	size_t		moves;
}				t_size;

intmax_t	ft_atoimax(const char *nptr);

size_t		tab_sorted(int **tab_a, t_size *size);

size_t		check_double(int *tab, int argc);
size_t		check_nb(int argc, char **argv);

void		push_swap_algo(int **tab_a, int **tab_b, t_size *size);

// operations
void		sa(int **tab_a, t_size *size, char c);
void		sb(int **tab_b, t_size *size, char c);
void		ss(int **tab_a, int **tab_2, t_size *size, char c);
void		pa(int **tab_a, int **tab_b, t_size *size, char c);
void		pb(int **tab_a, int **tab_b, t_size *size, char c);
void		ra(int **tab_a, t_size *size, char c);
void		rb(int **tab_b, t_size *size, char c);
void		rr(int **tab_a, int **tab_b, t_size *size, char c);
void		rra(int **tab_a, t_size *size, char c);
void		rrb(int **tab_b, t_size *size, char c);
void		rrr(int **tab_a, int **tab_b, t_size *size, char c);

#endif
