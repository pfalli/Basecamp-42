/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:09:31 by pfalli            #+#    #+#             */
/*   Updated: 2021/08/18 13:58:07 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

int main()
{
	char x[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strlowcase(x);
	ft_strcapitalize(x);
	printf("%s", ft_strcapitalize(x));
	return(0);
}