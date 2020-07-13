/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:50:19 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:35:28 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "backtracking.h"
#include "validation.h"
#include "main.h"

void	print_map(int **map_arr)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4 - 1)
		{
			c = map_arr[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = map_arr[i][j] + '0';
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
	g_map_cnt += 1;
}

void	dfs(int **map_arr, int row, int col)
{
	if (g_map_cnt == 1)
		return ;
	if (row == 3 && col == 4)
	{
		if (check_row_exception(map_arr, row))
			print_map(map_arr);
	}
	else if (row != 3 && col == 4)
		dfs(map_arr, row + 1, 0);
	else
		check_required_conditions(map_arr, row, col);
}

void	check_required_conditions(int **map_arr, int row, int col)
{
	int building;

	building = 1;
	while (building <= 4)
	{
		map_arr[row][col] = building;
		if (is_possible_row(map_arr, row, col)
		&& is_possible_col(map_arr, row, col))
		{
			if (row == 3)
			{
				if (check_col_exception(map_arr, col))
					dfs(map_arr, row, col + 1);
			}
			else if (col == 3)
			{
				if (check_row_exception(map_arr, row))
					dfs(map_arr, row, col + 1);
			}
			else
				dfs(map_arr, row, col + 1);
		}
		building++;
	}
}
