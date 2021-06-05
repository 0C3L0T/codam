#include <unistd.h>

void	ft_putchar(int	y, int box_y, int x, int box_x)
{
	while (box_y > 0)
	{
		if ((box_x == x || box_x == 1) && box_y == y)
		{
			write(1, "A", 1);
			box_y--;
		}
		else if ((box_y == 1 || box_y == y) || (box_x == 1 || box_x == x))
		{
			write(1, "B", 1);
			box_y--;
		}
		else if ((box_x == x || box_x == 1) && box_y == 1)
		{
			write(1, "C", 1);
			box_y--;
		}
		else
		{
			write(1, " ", 1);
			box_y--;
		}
	}
}
