/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:50:54 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/18 16:49:06 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	int size;
	char x[] = "Ciao!";
	size = ft_strlen(x);
	printf("How many characters = %d\n", size);
	return (0);
}
