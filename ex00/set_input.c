/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:52:07 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:35:48 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_input.h"
#include "main.h"

int		is_valid_number(void)
{
	int i;
	int j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			if (!(1 <= g_row_restriction[i][j]
			&& g_row_restriction[i][j] <= 4))
				return (0);
			if (!(1 <= g_col_restriction[i][j]
			&& g_col_restriction[i][j] <= 4))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		set_row_col_array(char *input)
{
	int cnt;
	int i;

	cnt = 0;
	i = 0;
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			g_col_restriction[0][i / 2] = (int)(input[i] - '0');
			g_col_restriction[1][i / 2] = (int)(input[i + 8] - '0');
			g_row_restriction[0][i / 2] = (int)(input[i + 16] - '0');
			g_row_restriction[1][i / 2] = (int)(input[i + 24] - '0');
		}
		else
		{
			if (input[i] != ' ' || input[i + 8] != ' '
			|| input[i + 16] != ' ' || input[i + 24] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

void	init_row_col_array(void)
{
	int i;

	i = 0;
	g_row_restriction = (int **)malloc(sizeof(int *) * 2);
	g_col_restriction = (int **)malloc(sizeof(int *) * 2);
	while (i < 2)
	{
		g_row_restriction[i] = (int *)malloc(sizeof(int) * 4);
		g_col_restriction[i] = (int *)malloc(sizeof(int) * 4);
		i++;
	}
}

int		**get_map_array(void)
{
	int **map_arr;
	int i;
	int j;

	i = 0;
	map_arr = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		map_arr[i] = (int *)malloc(sizeof(int) * 4);
		j = 0;
		while (j < 4)
		{
			map_arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map_arr);
}
