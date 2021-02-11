/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:47:29 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/10 12:26:39 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int aux;
	int i;

	i = 0;
	aux = 1;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 65 && str[i] <= 90) && !(str[i] >= 97
			&& str[i] <= 122))
				aux = 0;
			i++;
		}
	}
	return (aux);
}
