/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 22:09:56 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/22 22:25:11 by lucpardo         ###   ########.fr       */
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

ft_integer(int n)
{
}

ft_unsigned(unsigned int u)
{
}

ft_hexadecimal(unsigned int nbr, int is_upper)
{
}

ft_pointer(void *ptr)
{
}
// string
// decimal and integer
// unsigned
// hexadecimal
// pointer
