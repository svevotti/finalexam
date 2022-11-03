/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:59:31 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/25 10:07:08 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 32 && str[index] <= 126)
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
	int result;
	
	result = ft_str_is_printable(" ");
	printf("%d\n", result);
	result = ft_str_is_printable("\a");
	printf("%d\n", result);
	result = ft_str_is_printable("~");
	printf("%d\n", result);
}*/
