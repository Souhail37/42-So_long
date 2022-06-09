/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 22:25:47 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/01 22:01:15 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	put_2_0(t_data mlx, t_struct img)
{
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/na.xpm", &img.x, &img.y);
	mlx.i = 0;
	mlx.px = 0;
	mlx.py = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == 'P')
		{
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, mlx.px, mlx.py);
			break ;
		}
		mlx.px += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			mlx.px = 0;
			mlx.py += 60;
		}
		mlx.i++;
	}
	return (mlx.py);
}

int	put_2_1(t_data mlx, t_struct img)
{
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/na.xpm", &img.x, &img.y);
	mlx.i = 0;
	mlx.px = 0;
	mlx.py = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == 'P')
		{
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, mlx.px, mlx.py);
			break ;
		}
		mlx.px += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			mlx.px = 0;
			mlx.py += 60;
		}
		mlx.i++;
	}
	return (mlx.i);
}

void	push(t_data mlx, t_struct img)
{
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, (mlx.j - 1) * 60, mlx.i * 60, "Naruto");
	img.img = mlx_new_image(mlx.mlx, (mlx.j - 1) * 60, mlx.i * 60);
	img.address = mlx_get_data_addr(img.img, &img.bpp, &img.ls, &img.en);
	mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, 0, 0);
	ft_wall(mlx, img);
	put_1(mlx, img);
	mlx.px = put_2(mlx, img, 0, 0);
	mlx.py = put_2_0(mlx, img);
	mlx.i = put_2_1(mlx, img);
	mlx.mv = mlx.i;
	put_3(mlx, img);
	put_4(mlx, img);
	put_pain(mlx, img);
	mlx.i = 0;
	mlx.st = ft_stance1(&mlx);
	mlx.run = ft_run(&mlx);
	mlx.mrun = ft_mrun(&mlx);
	mlx_hook(mlx.win, 2, 1L << 0, key_tap, &mlx);
	mlx_hook(mlx.win, 17, 0, mouse_17, &mlx);
	mlx_loop_hook(mlx.mlx, ft_sprite, &mlx);
	mlx_loop(mlx.mlx);
}

void	key_53(t_data *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	exit (1);
}

int	mouse_17(int mouse, t_data *mlx)
{
	(void)mouse;
	(void)mlx;
	exit (1);
	return (0);
}
