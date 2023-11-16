/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
