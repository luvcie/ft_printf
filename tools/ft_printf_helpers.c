/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:09:56 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/22 23:00:37 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_string(char *str)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

// putcount recursively prints positive long integer
// and counts digits that have been printed, used
// for integer and unsigned helper functinos
static int	ft_putcount(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 10)
	{
		i += ft_putcount(nbr / 10);
	}
	ft_putchar_fd((nbr % 10) + '0', 1);
	i++;
	return (i);
}

// for d and i, returns number of characters to print
int	ft_integer(int n)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	if (str == NULL)
		return (0);
	ft_putstr_fd(str, 1);
	i = ft_strlen(str);
	free(str);
	return (i);
}
