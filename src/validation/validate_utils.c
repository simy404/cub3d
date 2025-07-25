/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamir <hsamir@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:07:22 by sdaban            #+#    #+#             */
/*   Updated: 2025/07/24 14:39:14 by hsamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "element.h"
#include "string_utils.h"
#include "memory_allocator.h"
#include "limits.h"

int	is_valid_player_count(char *input)
{
	int index;
	int	p_count;

	index = 0;
	p_count = 0;
	while (input[index])
	{
		if (ft_strchr(PLAYER_CHR, input[index]))
			p_count++;
		index++;
	}
	return (p_count == 1 || p_count == 0);
}

int	is_valid_file_extension(char *file_path)
{
	return (ends_with(file_path, ".cub"));
}


