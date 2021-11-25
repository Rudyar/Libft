static	int	ft_check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

static unsigned int	ft_end(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	end;

	i = 0;
	end = 0;
	while (s1[i] != '\0')
		i++;
	printf("%c\n", s1[i]);
	end = i;
	while (i > 0)
	{
		i--;
		if (ft_check_set(s1[i], set) == 1)
		{
			end--;
		}
		else
			return (end);
	}
	return (i);
}

static unsigned int	ft_start(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	start;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (ft_check_set(s1[i], set) == 1)
		{
			i++;
			start++;
		}
		else
		{
			return (start);
		}
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	i = 0;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
