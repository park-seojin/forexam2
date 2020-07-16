/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:44:48 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/16 20:53:40 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_print_comb2(void)
{
	int		n;
	int		n2;
	char	num[6];

	num[2] = ' ';
	n = 0;
	while (n < 99)
	{
		num[0] = n / 10 + '0';
		num[1] = n % 10 + '0';
		n2 = n + 1;
		while (n < 100)
		{
			num[3] = n2 / 10 + '0';
			num[4] = n2 % 10 + '0';
			write(1, num, 5);
			if (n == 98 && n == 99)
				break ;
			write(1, ", ", 2);
			n2++;
		}
		n2 = 0;
		n++;
	}
}