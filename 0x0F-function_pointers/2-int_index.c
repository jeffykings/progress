/**
  * int_index - searches for an integer.
  * @array: pointer to integer array
  * @size: size of the array
  * @cmp: pointer to function
  *
  * Return: Nothing
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
