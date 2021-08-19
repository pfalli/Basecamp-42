/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:28:29 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 09:37:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	x = 3;
	int	*a = &x;
	int	**b = &a;
	int	***c = &b;
	int	****d = &c;
	int	*****e = &d;
	int	******f = &e;
	int	*******g = &f;
	int	********h = &g;
	int	*********nbr = &h;

	ft_ultimate_ft(&h);
	printf("Value of x = %d \n", x);
}