/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:59:31 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/24 12:26:39 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
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
	
	result = ft_str_is_lowercase("hello");
	printf("%d\n", result);
	result = ft_str_is_lowercase("H");
	printf("%d\n", result);
	result = ft_str_is_lowercase("");
	printf("%d\n", result);
}*/
