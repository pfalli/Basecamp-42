/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:23:00 by coder             #+#    #+#             */
/*   Updated: 2021/08/16 10:23:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	int r;
	char str[] = "Hello";  // char str[] = {'H','e','l','l','o'}  it's the same//
	r = ft_strlen(str);
	printf("%d\n", r);
	return(0);
}
