/**
  * wildcmp -  compares two strings
  * @s1: strings to comment 
  * @s2: second string to compare
  * Return: 1 if the strings can be considered identical, otherwise 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else if ((*s1 != '\0' || *s2 != '\0') && (*(s2 - 1) == '*'))
	{
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}

		return (wildcmp(s1 + 1, s2));
	}
	if ((*s1 != *s2) && (*s1 != '\0' || *s2 != '\0'))
	{
		return (0);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (1);
	}
	else
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
