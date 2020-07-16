/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:29:35 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/16 20:34:10 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char c;

	c = 'N';
	if (n >= 0)
	{
		c = 'P';
	}
	write(1, &c, 1);
}
