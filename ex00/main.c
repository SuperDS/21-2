/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:51:43 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:34:52 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "backtracking.h"
#include "validation.h"
#include "set_input.h"

int g_map_cnt = 0;
int **g_row_restriction;
int **g_col_restriction;

int		is_valid_input(char *input)
{
	init_row_col_array();
	if (input[31] != '\0')
		return (0);
	input[31] = ' ';
	if (!set_row_col_array(input))
		return (0);
	if (!is_valid_number())
		return (0);
	return (1);
}

void	free_map_array(int **map_arr)
{
	int i;

	i = 0;
	while (i < 4)
	{
		free(map_arr[i]);
		i++;
	}
	free(map_arr);
}

void	free_row_col_array(void)
{
	int i;

	i = 0;
	while (i < 2)
	{
		free(g_row_restriction[i]);
		free(g_col_restriction[i]);
		i++;
	}
	free(g_col_restriction);
	free(g_row_restriction);
}

int		main(int argc, char *argv[])
{
	int **map_arr;

	if (argc == 2)
	{
		if (!is_valid_input(argv[1]))
		{
			write(1, "Error\n", 6);
		}
		else
		{
			map_arr = get_map_array();
			dfs(map_arr, 0, 0);
			if (!g_map_cnt)
				write(1, "Error\n", 6);
			free_map_array(map_arr);
		}
		free_row_col_array();
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
