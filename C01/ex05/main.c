/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:53:57 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 10:18:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);
void	ft_putchar(char c);

int main(void)
{
	char x[] = "hello";
	
	ft_putstr(x);
	ft_putchar('\n');
}
