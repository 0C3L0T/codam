#include <unistd.h>

void	rush(int y, int x)
{
	int	box_x;
	int	box_y;

	box_x = x;
	while (box_x > 0)
	{
		box_y = y;
		while (box_y > 0)
		{
			ft_putchar(x, box_x, y, box_y);
			box_y--;
		}
		write(1, "\n", 1);
		box_x--;
	}
}
