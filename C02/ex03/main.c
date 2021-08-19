/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:18:16 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 11:13:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char x[] = "347582727";
	ft_str_is_numeric(x);
	printf("%i\n", ft_str_is_numeric(x));
	return(0);
}