/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazzari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:09:50 by smazzari          #+#    #+#             */
/*   Updated: 2022/10/20 13:00:42 by smazzari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a;
	int b;
	int *ptr;
	int *ptr1;
	
	a = 3;
	b = 4;
	
	ptr = &a;
	ptr1 = &b;

	printf("%d %d", a, b);
	ft_swap(ptr, ptr1);
	printf("%d %d\n", *ptr, *ptr1);
}
