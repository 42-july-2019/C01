/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:37:43 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/05 15:53:49 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int loop_i;
	int tab_i;

	loop_i = 0;
	while (loop_i <= size - 1)
	{
		tab_i = loop_i + 1;
		while (tab_i <= size - 1)
		{
			if (tab[loop_i] > tab[tab_i])
			{
				temp = tab[tab_i];
				tab[tab_i] = tab[loop_i];
				tab[loop_i] = temp;
			}
			tab_i++;
		}
		loop_i++;
	}
}
