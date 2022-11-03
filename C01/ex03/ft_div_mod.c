/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:07:22 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/20 13:01:29 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	ft_div_mod(a, b, ptr, ptr2);
	printf("%d\n", *ptr);	
	printf("%d\n", *ptr2);	
}*/
