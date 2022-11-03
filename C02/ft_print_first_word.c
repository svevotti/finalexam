/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_first_word.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:41:11 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/27 12:54:52 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_first_word(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			i++;
		}	
			if (str[i] >= 33 && str[i] <= 126)
			{
				ft_putchar(str[i]);
				i++;
			}
			else
			{
				return;
			}
	}
}*/

int main(int argc, char *argv[])
{	
	int k;
	int	i;	
	k = 0;
	i = 0;
	while (arg[i] != 0)
		{
	if (arg[i] == 1)
	{
	printf("ok %s\n", argv[k]);
	}
	else if (arg[i] > 2) //I want to consider only with 1 parameter
	{
		printf("well done \n");
	}
	}
	i++;
	k++;
}		
/*	char	str[] = "lore,ipsu  ";
	char	str1[] = "lore,ipsu  ";
	char	str2[] = " ";
	char	str3[] = "  lore,ipsu  ";
 
	ft_print_first_word(str);
	ft_putchar('\n');
	ft_print_first_word(str1);
	ft_putchar('\n');
	ft_print_first_word(str2);
	ft_putchar('\n');
	ft_print_first_word(str3);
	ft_putchar('\n');
	ft_print_first_word(argc);
	ft_putchar('\n');*/
//}		











