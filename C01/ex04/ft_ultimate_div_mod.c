/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:18:55 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/20 13:04:56 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int a;
	int b;
	int *ptr;
	int *ptr2;

	a = 4;
	b = 3;

	ptr = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr, ptr2); 
	printf("%d%d\n", *ptr, *ptr2);
}*/
