/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:02:19 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/02 13:06:42 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	key_tap(int key, t_data *mlx, int x, int y)
{
	t_struct	img;
	int			b;

	(void)key;
	(void)mlx;
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/orange.xpm", &x, &y);
	b = 0;
	exit_check(mlx);
	pain_check(key, mlx);
	if (key == 0 && mlx->tab[mlx->mv - 1] != '1'
		&& mlx->tab[mlx->mv - 1] != 'E')
		ft_loop1(mlx, img, key, b);
	else if (key == 1 && mlx->tab[mlx->mv + mlx->j] != '1'
		&& mlx->tab[mlx->mv + mlx->j] != 'E')
		ft_loop1(mlx, img, key, b);
	else if (key == 2 && mlx->tab[mlx->mv + 1] != '1'
		&& mlx->tab[mlx->mv + 1] != 'E')
		ft_loop2(mlx, img, key, b);
	else if (key == 13 && mlx->tab[mlx->mv - mlx->j] != '1'
		&& mlx->tab[mlx->mv - mlx->j] != 'E')
		ft_loop2(mlx, img, key, b);
	else if (key == 53)
		key_53(mlx);
	return (0);
}

int	main(int ac, char **av)
{
	t_data		mlx;
	t_struct	img;
	t_point		valid;
	int			fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_valide_path(av[1]);
		if (fd < 0)
			return (1);
		valid.str = get_next_line(fd);
		if (!valid.str)
			return (1);
		mlx.j = ft_strlen(valid.str);
		valid_map1(valid.str, img.x, mlx.j);
		ft_strings(&mlx, &valid, fd);
		map_check(mlx);
		valid_map2(mlx.tab, valid.rm, img);
		valid_map3(mlx, valid);
		push(mlx, img);
	}
	return (0);
}
