/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:50:54 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/18 18:17:05 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_putstr(char *str);
void 	ft_putchar(char c);

int main()
{
	char x[] = "ciao io sono Pierotti";
	ft_putstr(x);
	ft_putchar('\n');
}
