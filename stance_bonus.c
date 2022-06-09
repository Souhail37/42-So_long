/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stance_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:15:06 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/01 22:21:10 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

t_stance	ft_stance1(t_data *mlx)
{
	t_struct	img;

	mlx->st.st1 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/st1.xpm", &img.x, &img.y);
	mlx->st.st2 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/st2.xpm", &img.x, &img.y);
	mlx->st.st3 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/st3.xpm", &img.x, &img.y);
	mlx->st.st4 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/st4.xpm", &img.x, &img.y);
	mlx->st.st5 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/st5.xpm", &img.x, &img.y);
	return (mlx->st);
}

t_run	ft_run(t_data *mlx)
{
	t_struct	img;

	mlx->run.run1 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/run1.xpm", &img.x, &img.y);
	mlx->run.run2 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/run2.xpm", &img.x, &img.y);
	mlx->run.run3 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/run3.xpm", &img.x, &img.y);
	mlx->run.run4 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/run4.xpm", &img.x, &img.y);
	return (mlx->run);
}

t_mrun	ft_mrun(t_data *mlx)
{
	t_struct	img;

	mlx->mrun.mrun1 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/mr1.xpm", &img.x, &img.y);
	mlx->mrun.mrun2 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/mr2.xpm", &img.x, &img.y);
	mlx->mrun.mrun3 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/mr3.xpm", &img.x, &img.y);
	mlx->mrun.mrun4 = mlx_xpm_file_to_image(mlx->mlx,
			"pics/mr4.xpm", &img.x, &img.y);
	return (mlx->mrun);
}
