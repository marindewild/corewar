/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isalpha.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nde-wild <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 15:19:49 by nde-wild      #+#    #+#                 */
/*   Updated: 2019/01/16 10:32:32 by nde-wild      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
