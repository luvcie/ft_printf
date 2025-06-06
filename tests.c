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
#include <stdio.h>

void	ft_start(void)
{
	ft_printf("\033[1m           T E S T S  I N I T I A L I Z E D\033[0m");
}

void	ft_end(void)
{
	ft_printf("\033[1m                  T E S T S  E N D E D\033[0m");
}

void	ft_sep(void)
{
	ft_printf("\n                                                       \n");
}

void	ft_oOo(void)
{
	ft_printf("\n o O o O o O o O o O o O o O o O o O o O o O o O o O o \n");
}

int	main(void)
{
	int	*ptr;
	int	nbr;
	int	ret;
	char	str[1501];

	nbr = 42;
	ptr = &nbr;
	ft_oOo();
	ft_oOo();
	ft_oOo();
	ft_start();
	ft_oOo();
	ft_oOo();
	ft_oOo();
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
	ft_printf("in uppercase: %X", 0x776F726C640D0A);
	ft_sep();
	ft_printf("but can it print the percent sign?: %%");
	ft_sep();
	ft_printf("looks like it can! :o");
	ft_sep();
	ft_printf("now let's see some trickier edge cases...");
	ft_sep();
	ft_printf("what about a NULL Pointer? %p", NULL);
	ft_sep();
	ft_printf("hopefully that printed (nil) and not (null) o.O");
	ft_sep();
	ft_printf("testing return as NULL");
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
	ret = ft_printf("%d%", 777);
	ft_printf("and %d%% with incomplete format returned: %d", 777, ret);
	ft_sep();
	ft_printf("hopefully that returned -1 and didn't explode!");
	ft_sep();
	ft_printf("very long string with 1500 characters :");
	ft_sep();
	ft_memset(str, '*', 1500);
	str[1500] = '\0';
	ft_printf("%s", str);
	ft_sep();
	ft_printf("and again to make sure, more ft_printf(0) tests \n");
	printf("\n");
	ft_printf("");
	printf("with real printf: \n");
	printf(0);
	printf("\n");
	ft_printf("with ft_printf: ");
	ft_printf(0);
	ft_printf(NULL);
	ft_sep();
	ft_printf("hello %d ");
	ft_sep();
	ft_printf("hello %d ", 42, "test ", 55);
	ft_printf("letter %c string %s pointer %p decimal %d integer %i unsigned %u hexa %x HEXA %X percentage %%", 'o', "hello", ptr, 42, 1337, 111, 0x1B2A1C, 0x4A5A6A); 
	ft_sep();
	ft_printf("ft_printf passing a string as %s", NULL);
	ft_sep();
	ft_printf("ft_printf passing a string as %s", 0);
	ft_sep();
	ft_printf("ft_printf passing a string as %s", "NULL");
	ft_sep();
	ft_printf("ft_printf passing a hexa lowercase as %x", NULL);
	ft_sep();
	printf("printf passing a hexa lowercase as %x \n", 0);
	ft_sep();
	ft_printf("ft_printf passing a hexa lowercase as %x", 0);
	ft_sep();
	ft_printf("ft_printf passing a hexa upercase as %X", 0);
	ft_sep();
	ft_printf("ft_printf passing an integer as %i", 0);
	ft_sep();
	printf("printf passing an integer as %i", 0);
	ft_sep();
	ft_printf("ft_printf passing an integer as %d", 0);
	ft_sep();
	ft_printf("ft_printf passing an unsigned as %u", 0);
	ft_sep();
	ft_printf("ft_printf passing a percent as %%", 0);
	ft_sep();
	ft_printf("ft_printf passing a character as %c", NULL);
	ft_sep();
	printf("printf passing a character as %c \n", 0);
	ft_sep();
	ft_printf("ft_printf passing a character as %c", 0);
	ft_sep();
	ft_printf("hello i'm %u", NULL);
	ft_sep();
	ft_printf("I hope all worked! :D");
	ft_sep();
	ft_oOo();
	ft_oOo();
	ft_oOo();
	ft_end();
	ft_oOo();
	ft_oOo();
	ft_oOo();

	return (0);
}
