/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:57:15 by smazzari          #+#    #+#             */
/*   Updated: 2022/11/03 10:52:58 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_count_digits(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count = 1;
	if (nb < 0)
		nb = nb * (-1);
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	ft_get_multiplier(int count)
{
	int	c;

	c = 1;
	while (count > 1)
	{
		c = c * 10;
		count--;
	}
	return (c);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	count;
	int	m;
	int	digit;

	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		count = ft_count_digits(nb);
		m = ft_get_multiplier(count);
		if (nb < 0)
		{
			nb = nb * (-1);
			ft_putchar('-');
		}
		while (m > 0)
		{
			digit = nb / m;
			ft_putchar('0' + digit);
			nb = nb - digit * m;
			m = m / 10;
		}
	}
}
