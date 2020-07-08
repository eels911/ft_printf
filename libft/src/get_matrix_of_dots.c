/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_matrix_of_dots.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slisandr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:12:26 by slisandr          #+#    #+#             */
/*   Updated: 2020/02/12 22:12:30 by slisandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**get_matrix_of_dots(unsigned int rows, unsigned int cols)
{
	char				**matrix;
	unsigned int		i;
	unsigned int		j;

	if (!(matrix = (char **)malloc((rows + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < rows)
	{
		matrix[i] = ft_strnew(cols);
		j = 0;
		while (j < cols)
		{
			matrix[i][j] = '.';
			j++;
		}
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
