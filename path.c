/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:48:17 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/01 22:05:37 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "gnl/get_next_line.h"

int	ft_valide_path(char *path)
{
	int		len;
	int		index;
	int		i;
	char	*ext;

	i = 0;
	ext = ".ber";
	len = ft_strlen(path);
	index = len - 4;
	if (index <= 0)
		return (0);
	while (path[index + i])
	{
		if (path[index + i] != ext[i])
		{
			ft_printf("Wrong path\n");
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_init(t_data *mlx, t_struct *img, int *test)
{
	img->img = mlx_xpm_file_to_image(mlx->mlx, "pics/na.xpm", &img->x, &img->y);
	*test = 1;
	mlx->i = 0;
	mlx->px = 0;
	mlx->py = 0;
}

void	ft_strings(t_data *mlx, t_point *valid, int fd)
{
	while (valid->str)
	{
		mlx->tab = ft_strjoin(mlx->tab, valid->str);
		valid->rm = mlx->tab;
		free (valid->str);
		valid->str = get_next_line(fd);
		mlx->i++;
	}
}
