/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:51:29 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 09:52:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int x = 10;
	int y = 2;
	ft_ultimate_div_mod(&x, &y);
	printf("value of division x = %d \n", x);
	printf("value of reminder y = %d \n", y);
}
