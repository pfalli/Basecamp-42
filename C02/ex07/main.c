/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:25:14 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/19 10:14:57 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char y[] = "a1er0ttz";
	ft_strupcase(y);
	printf("%s\n", ft_strupcase(y));
	return(0);
}