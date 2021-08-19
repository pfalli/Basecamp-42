/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:49:03 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/19 10:15:19 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char x[] = "AELLO THERZ";
	ft_strlowcase(x);
	printf("%s\n", ft_strlowcase(x));
	return(0);
}
