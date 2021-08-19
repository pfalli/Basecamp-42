/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:58:48 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 13:01:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char x[] = "fanculo";
	ft_str_is_lowercase(x);
	printf("%i\n", ft_str_is_lowercase(x));
	return(0);
}