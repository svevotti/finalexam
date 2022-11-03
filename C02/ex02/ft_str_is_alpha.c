/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:59:31 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/24 14:12:36 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
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
		else if (str[index] >= 'A' && str[index] <= 'Z')
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
	
	result = ft_str_is_alpha("HELLO");
	printf("%d\n", result);
	result = ft_str_is_alpha("Hell@");
	printf("%d\n", result);
	result = ft_str_is_alpha("");
	printf("%d\n", result);
}*/
