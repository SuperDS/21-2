/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:53:23 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:36:11 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef VALIDATION_H
#	define VALIDATION_H

int		is_possible_row(int **map_arr, int row, int col);
int		is_possible_col(int **map_arr, int row, int col);
int		compare_restriction(int first, int last, int row, int col);
int		check_row_exception(int **map_arr, int row);
int		check_col_exception(int **map_arr, int col);

#	endif
