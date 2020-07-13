/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:50:53 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:35:36 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef BACKTRACKING_H
#	define BACKTRACKING_H

void	dfs(int **map_arr, int row, int col);
void	print_map(int **map_arr);
void	check_required_conditions(int **map_arr, int row, int col);

#	endif
