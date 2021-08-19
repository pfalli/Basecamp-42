/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:59:29 by coder             #+#    #+#             */
/*   Updated: 2021/08/17 09:16:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);
// n = lenght of the longest string //

int main(void)
{
	char dest[] = "Oldest string";
	char src[] = "New string";

	printf ("%s\n", dest);
	printf ("%s\n", src); // if the lenght of src or dest is longer than dest/src, we have to print many '\0' until the lenght of src.
	ft_strncpy (dest, src, 13); 
	printf ("%s\n", dest);
	printf ("%s\n", src);
	return(0);
}
