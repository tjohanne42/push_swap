all :
	make re -C libft
	gcc -Wall -Wextra -Werror -o checker src/tab_sorted.c src/check_arg.c src/checker/main.c src/ft_atoimax.c src/get_next_line.c src/operations.c -L libft -lft -I libft -I inc
	gcc -Wall -Wextra -Werror -o push_swap src/tab_sorted.c src/push_swap/push_swap_algo.c src/ft_atoimax.c src/check_arg.c src/operations.c src/push_swap/main.c -L libft -lft -I libft -I inc

test : all
	gcc -o nb_generation test/main.c -L libft -lft -I inc -I libft
	./nb_generation
	ARG=$$(<nb); ./push_swap $$ARG | ./checker $$ARG
