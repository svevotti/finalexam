/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:04:02 by smazzari          #+#    #+#             */
/*   Updated: 2022/11/02 10:27:42 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_skip_spaces(char *str, int i)
{
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	return (i);
}

int	ft_check_sign(char *str, int i, int *sign)
{
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = *sign * (-1);
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	digit;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	i = ft_skip_spaces(str, i);
	i = ft_check_sign(str, i, &sign);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - 48;
			number = number * 10 + digit;
		}
		else
			break ;
		i++;
	}
	if (sign == -1)
		number = number * (-1);
	return (number);
}

/*int	main(void)
{
	int	num;
	int	num2;
	int	num3;
	
	num = ft_atoi("  --+---+1234ab567");
	printf("%d\n", num);
	num = ft_atoi("  --+---+ 1234ab567");
	printf("%d\n", num);
	num2 = ft_atoi("32");
	printf("%d\n", num2);
	num3 = ft_atoi("--328");
	printf("%d\n", num3);
}*/
