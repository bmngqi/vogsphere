/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmngqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 16:55:28 by bmngqi            #+#    #+#             */
/*   Updated: 2020/06/26 09:19:30 by bmngqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_ft(int *x);

int main(void)
{
	
	int x;
	int *y;
	y = &x;
	ft_ft(y);
}

void ft_ft(int *x)
{
	*x = 42;
	printf("%i", *x);
}

