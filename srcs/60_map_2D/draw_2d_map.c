#include "cub3D.h"

// print 2D map without checking size
void	ft_print_map_in_2d(t_data *data)
{
	int	square_size;
	int	i;
	int	j;

	square_size = BLOCKSIZE_2D;
	j = 0;
	while (j < data->map_height)
	{
		i = 0;
		while (i < data->map_width)
		{
			if (data->map[i][j] == '1')
				ft_draw_square(data, i *square_size, j * square_size, square_size);
			i++;
		}
		j++;
	}
	//ft_img_pixel_put(data, square_size * data->player.x, square_size * data->player.y, MLX_COLOR_RED);
	ft_print_red_pixel_on_2D_map(data, data->player.x, data->player.y);
	mlx_put_image_to_window(data->mlx, data->window, data->img.img_pt, 0, 0);
}

void	ft_print_red_pixel_on_2D_map(t_data *data, double x, double y)
{
	ft_img_pixel_put(data, BLOCKSIZE_2D * x, BLOCKSIZE_2D * y, MLX_COLOR_RED);
	mlx_put_image_to_window(data->mlx, data->window, data->img.img_pt, 0, 0);
}