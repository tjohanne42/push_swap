/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjohanne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:24:46 by tjohanne          #+#    #+#             */
/*   Updated: 2017/11/29 16:24:47 by tjohanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int y;

	y = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
