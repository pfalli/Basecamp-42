/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:42:47 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 09:43:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int x;
	int y;
	ft_div_mod(10, 2, &x, &y);
	printf("Value of x = %d \n", x);
	printf("Reminder of division = %d \n", y);
}
