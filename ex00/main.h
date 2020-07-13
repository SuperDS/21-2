/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:51:20 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:34:59 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef MAIN_H
#	define MAIN_H

#include <unistd.h>
#include <stdlib.h>

extern int		g_map_cnt;
extern int		**g_row_restriction;
extern int		**g_col_restriction;
int				is_valid_input(char *input);
void			free_map_array(int **map_arr);
void			free_row_col_array(void);

#	endif
