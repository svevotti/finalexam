/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:59:31 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/25 10:07:54 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

/*void	print_string(char *str)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(void)
{	
	char str[] = "A";
	char str1[] = "hElLo";
	char str2[] = "Z";
	char *result;

	result = ft_strlowcase(str);
	print_string(result);
	ft_putchar('\n');
	result = ft_strlowcase(str1);
	print_string(result);
	ft_putchar('\n');
	result = ft_strlowcase(str2);
	print_string(result);
	ft_putchar('\n');
}*/
