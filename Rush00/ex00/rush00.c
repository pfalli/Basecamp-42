/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:08:12 by mschreib          #+#    #+#             */
/*   Updated: 2021/08/09 10:39:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// for printing a character
extern void	ft_putchar(char c);

// global variables: we can use them in all functions in this(!) file
// we can configure the look of our rectangle
const static char	g_upper_left = 'o';
const static char	g_upper_right = 'o';
const static char	g_lower_left = 'o';
const static char	g_lower_right = 'o';
const static char	g_horizontal = '-';
const static char	g_vertical = '|';
const static char	g_space = ' ';

void		ft_print_line(int x, char left, char middle, char right);

// prints a line using left, middle, right as character set
void	ft_print_line(int x, char left, char middle, char right)
{
	int	x_current;

	if (x > 0)
	{
		x_current = 1;
		ft_putchar(left);
		x_current++;
		while (x_current < x)
		{
			ft_putchar(middle);
			x_current++;
		}
		if (x > 1)
		{
			ft_putchar(right);
		}
		ft_putchar('\n');
	}
}

// draws a rectangle using the characters defined in the global variables
// x = width == number of columns to print
// y = height == number of rows to print
void	rush(int x, int y)
{
	int	y_current;

	y_current = 1;
	if ((x > 0) && (y > 0))
	{
		ft_print_line(x, g_upper_left, g_horizontal, g_upper_right);
		y_current++;
		while (y_current < y)
		{
			ft_print_line(x, g_vertical, g_space, g_vertical);
			y_current++;
		}
		if (y > 1)
		{
			ft_print_line(x, g_lower_left, g_horizontal, g_lower_right);
		}
	}
}
