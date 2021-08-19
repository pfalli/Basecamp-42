/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:59:29 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 08:31:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char dest[] = "Oldest string";
	char src[] = "New string";

	printf ("%s\n", dest);
	printf ("%s\n", src);
	ft_strcpy (dest, src);
	printf ("%s\n", dest);
	printf ("%s\n", src);
	return(0);
}
