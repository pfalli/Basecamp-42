/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:18:16 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 10:58:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char str[] = "H3/lo";
	ft_str_is_alpha(str);
	printf("%i\n", ft_str_is_alpha(str));
	return(0);
}