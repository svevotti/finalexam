/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:09:29 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/31 12:23:59 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int unsigned	i;
	int				dest_len;

	i = 0;
	dest_len = ft_strlen1(dest);
	while (src[i] != '\0' && i < n)
	{	
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
