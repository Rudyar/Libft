/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:14:22 by arudy             #+#    #+#             */
/*   Updated: 2021/11/24 15:05:17 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//-----------------------|
//---- ft_substr --------|
//-----------------------|

// int	main(void)
// {
// printf("%s\n", ft_substr("Salut ca va ?", 4, 6));
// return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_bzero --------|

// int	main(void)
// {
// char	a[] = "Salut ca va";
// char	b[] = "Salut ca va";

// ft_bzero(a, 4);
// bzero(b, 4);
// printf("Mon ft_bzero : %c %c %c %c %c %c \n", a[0], a[1], a[2], a[3], a[4], a[5]);
// printf("Vrai bzero   : %c %c %c %c %c %c", b[0], b[1], b[2], b[3], b[4], b[5]);
// return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_split --------|

// void ft_putstr(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
// }
//
// int main(void)
// {
    // char **tab;
    // int i;

    // i = 0;
//
    // tab = ft_split("c@eciestU@nsucces@!@", '@');
    // while (i < 4)
    // {
        // ft_putstr(tab[i]);
        // i++;
    // }
    // return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_itoa -----

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_strjoin -----

// int	main(void)
// {
// 	char	*s1 = "salut";
// 	char	*s2 = "salut";
// 	// s1[0] = '\0';

// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_strlcat -----

// int	main(void)
// {
// 	char s1a[10] = "Test1";
// 	char s2a[] = "OK";

// 	printf("%d\n", ft_strlcat(s1a, s2a, 6));
// 	return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_calloc -----

// int	main(void)
// {
	// int i;
	// int *a;
	// i = 0;
	// a = calloc(10, 4);
	// while (i < 10)
	// {
		// printf("%d", a[i]);
		// i++;
	// }
	// return 0;
// }

//---------------------------------------------------------------------------------|
//---- ft_memcpy -----

// int main(void)
// {
// 	int	i = 0;
// 	char	src[] = "Salut ca va ?";
// 	char	*dest;
// 	int	size = sizeof(char) * 1;

// 	/*
// 	int	src[]= {1, 2, 3, 4, 5};
// 	int	*dest;
// 	int	size = sizeof(char) * 5;
// 	*/

// 	dest = malloc(size);
// 	ft_memcpy(dest, src, size);
// 	while (i < size)
// 	{
// 		printf("%c ", dest[i]);
// 		i++;
// 	}
//     return (0);
// }

//---------------------------------------------------------------------------------|
//---- ft_memcmp -----

int	main(void)
{
	char s1[] = "y\200";
	char s2[] = "y\0";
	printf("Mon ft_memcmp : %d\n", ft_memcmp(s1, s2, 2));
	printf("The real one  : %d\n", memcmp(s1, s2, 2));
	return (0);
}

//---------------------------------------------------------------------------------|
//---- ft_memmove -----

// int	main(void)
// {
// 	char a[] = "blabla";
// 	char b[] = "qwerrr";
// 	char *c;
// 	c = memmove(a + 3, b, 4);
// 	printf("The real memmove : %s\n", c);

// 	char a1[] = "blabla";
// 	char b1[] = "qwerrr";
// 	char *c1;
// 	c1 = ft_memmove(a1 + 3, b1, 4);
// 	printf("Mon memmove      : %s\n", c1);
// 	return (0);
// }

//---------------------------------------------------------------------------------|
//---- ft_memset -----

// int	main(void)
// {
// char	a[] = "Salut ca va ?";
// char	b[] = "Salut ca va ?";
// char	d[] = "";
// char	e[] = "";
// char	f[] = "Salut ca va ?";
// char	g[] = "Salut ca va ?";
// char	c = 'z';
// //--- Compiler sans les flags
// printf("Mon memset      : %s\n", (char *)ft_memset(d, c, 0));
// printf("The real memset : %s\n", (char *)memset(e, c, 0));

// printf("Mon memset      : %s\n", (char *)ft_memset(a, c, 15));
// printf("The real memset : %s\n", (char *)memset(b, c, 15));

// printf("Mon memset      : %s\n", (char *)ft_memset(f, c, 1));
// printf("The real memset : %s\n", (char *)memset(g, c, 1));
// return (0);
// }

//---------------------------------------------------------------------------------|
//---- ft_memchr -----

// int	main(void)
// {
// 	char	str[] = "salut ca va ?";
// 	char	str1[] = "";
// 	char	str2[] = "salut a va ?";
// 	char	c = 'c';
// 	char	c1 = 'c';
// 	char	c2 = 'c';
// 	int		n = 9;
// 	int		n1 = 9;
// 	int		n2 = 9;

// 	printf("Mon ft_memchr   : %s\n", (char *)ft_memchr(str, c, n));
// 	printf("The real memchr : %s\n", (char *)memchr(str, c, n));
// 	printf("Mon ft_memchr   : %s\n", (char *)ft_memchr(str1, c1, n1));
// 	printf("The real memchr : %s\n", (char *)memchr(str1, c1, n1));
// 	printf("Mon ft_memchr   : %s\n", (char *)ft_memchr(str2, c2, n2));
// 	printf("The real memchr : %s\n", (char *)memchr(str2, c2, n2));
// 	return (0);
// }

//---------------------------------------------------------------------------------|
//---- ft_strtrim -----

// int	main(void)
// {
// 	char	s1[] = "salut ca va ?";
// 	char	set1[]= " ,";
// 	printf("s1 avant trim : %s\n", s1);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s1, set1));
// 	printf("----------\n");
// 	char	s2[] = " ,, salut ca va ?  , ,";
// 	char	set2[]= " ,";
// 	printf("s1 avant trim : %s\n", s2);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s2, set2));
// 	printf("----------\n");
// 	char	s3[] = "";
// 	char	set3[]= " ,";
// 	printf("s1 avant trim : %s\n", s3);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s3, set3));
// 	printf("----------\n");
// 	char	s4[] = "salut ca va ?";
// 	char	set4[]= "";
// 	printf("s1 avant trim : %s\n", s4);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s4, set4));
// 	printf("----------\n");
// 	char	s5[] = ", , , ,   ,,, ,";
// 	char	set5[]= " ,";
// 	printf("s1 avant trim : %s\n", s5);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s5, set5));
// 	printf("----------\n");
// 	char	s6[] = "entrainement";
// 	char	set6[]= "ent";
// 	printf("s1 avant trim : %s\n", s6);
// 	printf("s1 apres trim : %s\n", ft_strtrim(s6, set6));
// 	return (0);
// }

