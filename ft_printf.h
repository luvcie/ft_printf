/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 19:50:00 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/22 19:52:45 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "tools/libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);

int	ft_string(char *str);
int	ft_integer(int n);
int	ft_unsigned(unsigned int u);
int	ft_hexadecimal(unsigned int nbr, int is_upper);
int	ft_pointer(void *ptr);

#endif
