/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_input.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 21:52:28 by plee              #+#    #+#             */
/*   Updated: 2020/07/12 22:35:56 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SET_INPUT_H
#	define SET_INPUT_H

int		is_valid_number(void);
int		set_row_col_array(char *input);
int		**get_map_array(void);
void	init_row_col_array(void);

#	endif
