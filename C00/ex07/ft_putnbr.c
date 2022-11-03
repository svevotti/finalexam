/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:23:18 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/26 16:51:35 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int count_digits(int n)
{
	int	i;
	
	i = 1;
	if (n == 0)
	{
		i = 1;
	}
	else if (n < 0)
	{
		n = n * (-1);
	}
	while (n > 9)
	{
	n = n / 10;
	i = i + 1;
	}
	return(i);
}

void  ft_putnbr(int nbr)
{
	int c;
	int digit;
	int	count;
	int	i;

	count = count_digits(nbr);
	c = 1;
	i = count - 1;
	while (i > 0)
	{
		c = c * 10;
		i--;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}

	else if (nbr == 0)
	{
		ft_putchar('0');
		return;
	}
	else if (nbr < 0)
	{
		nbr = nbr * (-1);
		ft_putchar('-');
	}
	if (count == 1)
	{
		ft_putchar('0' + nbr);
		return;
	}
	while (nbr > 0)
	{
		digit = nbr / c;
		ft_putchar('0'+ digit);
		nbr = nbr - digit * c;
		c = c / 10;
	}
}

int main(void)
{
	ft_putnbr(453);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-420879);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}
	
