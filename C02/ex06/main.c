/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:58:48 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 13:13:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char x[] = "P1e)?rotti";
	ft_str_is_printable(x);
	printf("%i\n", ft_str_is_printable(x));
	return(0);
}
