/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azorlutu <azorlutu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:17:54 by azorlutu          #+#    #+#             */
/*   Updated: 2024/10/07 15:17:55 by azorlutu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
	{
		return (1);
	}
	return (0);
}