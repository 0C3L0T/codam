#include <unistd.h>

void rush(int y, int x)
{
	int box_x;
	int box_y;

	box_x = x;
	while(box_x > 0)
	{
		box_y = y;
		while(box_y > 0)
		{
			if((box_x == x || box_x == 1) && box_y == y)
			{
				write(1, "A", 1);
				box_y--;
			}
			else if ((box_x == x || box_x == 1) && box_y == 1) 
			{
				write(1, "C", 1);
				box_y--;
			}
			else if ((box_y == 1 || box_y == y) || (box_x == 1 || box_x == x)) 
			{
				write(1, "B", 1);
				box_y--;
			}
			else
			{
				write(1, " ",1);
				box_y--;
			}
		}
		write(1, "\n", 1);
		box_x--;
	}
}

int main(void)
{
	rush(0,0);
}
