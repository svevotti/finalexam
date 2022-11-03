/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:05:05 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/27 09:26:35 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

/*unsigned int	ft_strlcat(char *dest, *char srs, unsigned int size)
{
	










	return (dest[i] + src[i]);
}*/

int main(void)
{
	char	src[8] = "..bye!";
	char	dest[9] = "Hello..";
	int		size;
	
	size = strlcat(dest, src, 3);	
	printf("%d\n", size);

}
