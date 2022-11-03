/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:41:59 by smazzari          #+#    #+#             */
/*   Updated: 2022/11/03 10:47:37 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
int ft_count_digits(int nb);
int ft_get_multiplier(int count);
void ft_putstr(char *str);
void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(12345);
	ft_putchar('\n');
	ft_putnbr(-214748346);
	ft_putchar('\n');
	ft_putnbr(-189700);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');

}

