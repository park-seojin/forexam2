/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:56:22 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/16 21:12:48 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb <= 9)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		ft_putchar(-2);
		ft_putnbr(147483648);
	}
	else if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1))
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
