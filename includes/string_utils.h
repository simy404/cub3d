/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:49:27 by hsamir            #+#    #+#             */
/*   Updated: 2025/07/18 22:50:51 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H

char	*str_arr_join(char	**strings, int count);
void	str_arr_free(char	**strings, int count);

int		includes(char *str, char c);
int		str_equal(char *s1, char *s2);

#endif
