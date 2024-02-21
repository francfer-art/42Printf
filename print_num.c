/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:24:23 by francfer          #+#    #+#             */
/*   Updated: 2023/11/28 08:56:04 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digit_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	print_integer(int nb)
{
	ft_putnbr_fd(nb, 1);
	if (nb == -2147483648)
		return (11);
	return (digit_count(nb));
}

static int	unsigned_digit_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	unsigned_ft_putnbr_fd(unsigned int n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
		return ;
	}
	else
		ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}

int	print_unsigned(unsigned int nb)
{
	unsigned_ft_putnbr_fd(nb, 1);
	return (unsigned_digit_count(nb));
}
