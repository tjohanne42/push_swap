/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjohanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:10:57 by tjohanne          #+#    #+#             */
/*   Updated: 2017/12/18 20:10:58 by tjohanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int power)
{
	int i;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		i = 1;
	else
		i = nb * ft_power(nb, power - 1);
	return (i);
}