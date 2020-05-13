/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nde-wild <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 17:12:11 by nde-wild      #+#    #+#                 */
/*   Updated: 2019/01/18 17:22:21 by nde-wild      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_intsize(int nb)
{
	int i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}