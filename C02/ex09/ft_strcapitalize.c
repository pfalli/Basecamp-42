/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:09:08 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/19 10:25:46 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int h;
	int flag;
	
	h = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{			
		str[0] = str[0] - 32;
	}
	while (str[h] != 0)
	{
		if (str[h - 1] < '0' || str[h - 1] > 'z') 
		{
			flag = 1;
		}
		else if ()
		
	}
	return (str);
}
