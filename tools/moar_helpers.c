/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moar_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:26:14 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/22 22:28:09 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

// putcount recursively prints positive long integer
// and counts digits that have been printed
// used for unsigned and hexa helper functinos
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

int ft_unsigned(unsigned int u)
{
	if (u == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_putcount((unsigned long)u));
}

int ft_hexadecimal(unsigned int nbr, int is_upper)
{
	(void)nbr;
	(void)is_upper;
	return (0);
}

int ft_pointer(void *ptr)
{

}
