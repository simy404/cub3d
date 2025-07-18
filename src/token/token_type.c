/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 23:13:15 by hsamir            #+#    #+#             */
/*   Updated: 2025/07/19 09:44:43 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "token.h"
#include "libft.h"

t_token_type	get_texture_type(char *input)
{
	if (ft_strncmp(input, "NO ", 3) == 0)
		return (T_NORTH);
	else if (ft_strncmp(input, "SO ", 3) == 0)
		return (T_SOUTH);
	else if (ft_strncmp(input, "WE ", 3) == 0)
		return (T_WEST);
	else if (ft_strncmp(input, "EA ", 3) == 0)
		return (T_EAST);
	return (T_INVALID);
}

t_token_type	get_color_type(char *input)
{
	if (ft_strncmp(input, "F ", 2) == 0)
		return (T_FLOOR);
	return (T_CEIL);
}
