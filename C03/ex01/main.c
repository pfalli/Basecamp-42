/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:50:54 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/19 21:08:29 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "pierotti";
	char s2[] = "pierotti92";
	int x = ft_strncmp(s1, s2, 5);
	printf("Difference is = %d\n", x);
	return (0);
}

