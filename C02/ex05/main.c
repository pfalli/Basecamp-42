/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:58:48 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 13:07:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char x[] = "ABC";
	ft_str_is_uppercase(x);
	printf("%i\n", ft_str_is_uppercase(x));
	return(0);
}
