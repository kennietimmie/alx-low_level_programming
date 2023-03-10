/**
 * _strchr - finds a character in a string.
 * @s: pointer to string.
 * @c: character to locate.
 *
 * Return: pointer to first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
		return ('\0');
}
