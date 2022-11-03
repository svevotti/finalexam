/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:59:31 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/24 12:15:34 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
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
	
	result = ft_str_is_uppercase("HELLO");
	printf("%d\n", result);
	result = ft_str_is_uppercase("@");
	printf("%d\n", result);
	result = ft_str_is_uppercase("");
	printf("%d\n", result);
}*/
