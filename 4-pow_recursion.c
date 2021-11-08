/**
 * _pow_recursion- returns x raised to the power of y
 * @x: number
 * @y: number
 * Return: a number
 */
int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		y = y - 1;
		return (x * _pow_recursion(x, y));
	}

	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	else
		return (-1);
}
