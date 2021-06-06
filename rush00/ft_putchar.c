#include <unistd.h>

void	ft_putchar(int	y, int box_y, int x, int box_x)
{
	if ((box_y == y || box_y == 1) && box_x == x)
	{			
		write(1, "A", 1);
	}
	else if ((box_y == y || box_y == 1) && box_x == 1)
	{
		write(1, "C", 1);
	}
	else if ((box_y == 1 || box_y == y) || (box_x == 1 || box_x == x))
	{
		write(1, "B", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
