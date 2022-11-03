/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:48:10 by smazzari          #+#    #+#             */
/*   Updated: 2022/11/03 13:56:47 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != 0)
		i++;
	return (i);	
}
char *ft_strdup(char *src)
{
	int	index;
	char	*dest;
	index = 0;
	
	dest = (char *)malloc(sizeof(char)*(strlen(src) + 1));
	if (dest == NULL)
		return NULL;
	else
	{
		while (src[index] != 0)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
		return (dest);
	}
}

int main()
{
    char source[] = "GeeksForGeeks";
    printf("%s", ft_strdup(source));
    return 0;
}

