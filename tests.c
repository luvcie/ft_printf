/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:41:37 by lucpardo          #+#    #+#             */
/*   Updated: 2025/05/24 18:45:30 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_start(void)
{
	ft_printf("           T E S T S  I N I T I A L I Z E D");
}

void	ft_end(void)
{
	ft_printf("                  T E S T S  E N D E D");
}

void	ft_sep(void)
{
	ft_printf("\n o O o O o O o O o O o O o O o O o O o O o O o O o O o \n");
}

int	main(void)
{
	int	*ptr;
	int	nbr;
	int	ret;

	nbr = 42;
	ptr = &nbr;
	ft_sep();
	ft_sep();
	ft_sep();
	ft_start();
	ft_sep();
	ft_sep();
	ft_sep();
	ft_printf("hello my name is %s", "Lucie");
	ft_sep();
	ft_printf("the francinette is cool and all...");
	ft_sep();
	ft_printf("but I want to learn how to make my own tests >.<");
	ft_sep();
	ft_printf("my favorite letter is %c", 'o');
	ft_sep();
	ft_printf("my favorite number is %d", 93);
	ft_sep();
	ft_printf("my most loved integer is %d", 2147483647);
	ft_sep();
	ft_printf("and also %d", -2147483648);
	ft_sep();
	ft_printf("my fave unsigned number is %u", 1337);
	ft_sep();
	ft_printf("MY FAVORITE POINTER IS %p", ptr);
	ft_sep();
	ft_printf("my printf can also print hexadecimal :D");
	ft_sep();
	ft_printf("in lowercase: %x", 0x48656c6c6f);
	ft_sep();
	ft_printf("in uppercase: %x", 0x776f726c640d0a);
	ft_sep();
	ft_printf("but can it print the percent sign?: %%");
	ft_sep();
	ft_printf("looks like it can! :o");
	ft_sep();
	ft_printf(" o O o O o O o O o O o O o O o O o O o O o O o O o O o\n");
	ft_printf("now let's see some trickier edge cases...");
	ft_sep();
	ft_printf("what about a NULL Pointer? %p", NULL);
	ft_sep();
	ft_printf("hopefully that printed (nil) and not (null) o.O");
	ft_sep();
	ret = ft_printf(NULL);
	ft_sep();
	ft_printf("now calling ft_printf with NULL returned: %d", ret);
	ft_sep();
	ft_printf("it should have returned -1 or we are in big trouble!");
	ft_sep();
	ret = ft_printf("%");
	ft_printf("now a lonely %% with no specifier returned... %d", ret);
	ft_sep();
	ft_printf("it should have also returned -1!");
	ft_sep();
	ret = ft_printf("%d%", 123);
	ft_printf("and %d%% with incomplete format returned: %d", 123, ret);
	ft_sep();
	ft_printf("hopefully that returned -1 and didn't explode!");
	ft_sep();
	ft_printf("I hope all worked! :D");
	ft_sep();
	ft_sep();
	ft_end();
	ft_sep();
	ft_sep();
	return (0);
}
