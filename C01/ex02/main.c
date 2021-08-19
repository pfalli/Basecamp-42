/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:39:29 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 09:41:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int x = 55;
	int y = 33;
	ft_swap(&x, &y); // Pass addresses to function //
	printf("x = %d and y = %d\n", x, y);
	return(0);
}
	
	