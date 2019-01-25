all :
	make re -C libft
	gcc -Wall -Wextra -Werror -o checker.exe src/tab_sorted.c src/check_arg.c src/checker/main.c src/ft_atoimax.c src/get_next_line.c src/operations.c -L libft -lft -I libft -I inc
	gcc -Wall -Wextra -Werror -o push_swap.exe src/tab_sorted.c src/push_swap/push_swap_algo.c src/ft_atoimax.c src/check_arg.c src/operations.c src/push_swap/main.c -L libft -lft -I libft -I inc
	./push_swap 4 67 -3 87 23 80 2 3 6 5 9 10 | ./checker 4 67 -3 87 23 80 2 3 6 5 9 10