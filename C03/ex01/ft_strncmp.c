/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:36:50 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/31 12:22:57 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p1;
	unsigned char	*p2;
	int				subs;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] == '\0' && p2[i] == '\0')
		{
			return (0);
		}
		else if (p1[i] != p2[i])
		{
			subs = p1[i] - p2[i];
			return (subs);
		}
		i++;
	}
	return (0);
}
