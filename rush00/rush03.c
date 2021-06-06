#include <unistd.h>

void	rush(int x, int y)
{
	int	box_x;
	int	box_y;

	box_y = y;
	while (box_y > 0)
	{
		box_x = x;
		while (box_x > 0)
		{
			ft_putchar(y, box_y, x, box_x);
			box_x--;
		}
		write(1, "\n", 1);
		box_y--;
	}
}
