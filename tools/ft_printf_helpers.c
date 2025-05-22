/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:09:56 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/22 22:41:25 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

ft_string(char *str)
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
ft_putcount(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 10)
	{
		i += ft_print_count(nbr / 10);
	}
	ft_putchar_fd((nbr % 10) + '0', 1);
	i++;
	return (i);
}

ft_integer(int n)
{
}

// string
// decimal and integer
// unsigned
// hexadecimal
// pointer
