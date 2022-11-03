/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:41:46 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/31 12:33:24 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		k = 0;
		while (str [i + k] == to_find[k])
		{
			k++;
		}
		if (to_find[k] == '\0')
		{	
			return (str + i);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
