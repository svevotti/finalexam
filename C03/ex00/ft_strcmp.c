/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:36:50 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/31 12:21:23 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;
	int				i;
	int				subs;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *) s2;
	while (p1[i] != '\0')
	{
		if (p1[i] != p2[i])
		{
			subs = p1[i] - p2[i];
			return (subs);
		}
		i++;
	}
	subs = p1[i] - p2[i];
	return (subs);
}
