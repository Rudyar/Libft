/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:14:22 by arudy             #+#    #+#             */
/*   Updated: 2021/11/26 12:31:16 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//-----------------------|
//---- ft_substr --------|
//-----------------------|

// int	main(void)
{
// printf("%s\n", ft_substr("tripouille", 1, 1));
// printf("%s\n", ft_substr("Salut ca va ?", 7, 10));
// printf("%s\n", ft_substr("Salut ca va ?", 4, 0));
// printf("%s\n", ft_substr("Salut ca va ?", 0, 0));
// printf("%s\n", ft_substr("Salut ca va ?", 100, 40));
// return (0);
}

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

// int    main()
// {
//     printf("Test 1 \n\n");

//     char    a[] = ".";
//     char    b = ' ';
//     char    **strs1;
//     int        count = 0;

//     strs1 = ft_split(a, b);
//     printf("Le texte a split :\".\" en fonction de \" \".\n");
//     while (strs1[count] != 0)
//     {
//         printf("%s", strs1[count]);
//         printf("\n");
//         count++;
//     }

//     printf("Test 2 :\n\n");

//     printf("Envoie de NULL en parametre 1.\n");
//     printf("Si pas de segmentation fault, null s'affiche.\n");
//     ft_split(NULL, ' ');
//     printf("\"(null)\"\n\n");


//     printf("Test 3 \n\n");

//     char    e[] = "J'aime les pommes.";
//     char    f = '\0';
//     char    **strs3;

//     count = 0;
//     strs3 = ft_split(e, f);
//     printf("Le texte a split :\"J'aime les pommes.\" en fonction de \"\\0\".\n");
//     while (strs3[count] != 0)
//     {
//         printf("%s", strs3[count]);
//         printf("\n");
//         count++;
//     }

//     printf("Test 4 :\n\n");

//     char    g[] = "";
//     char    h = ' ';
//     char    **strs4;

//     strs4 = ft_split(g, h);
//     printf("Le texte a split :\"\" en fonction de \" \".\n");
//     printf("Ligne 1 : \"%s\"\n", strs4[0]);
//     printf("Ligne 2 : \"%s\"\n\n", strs4[1]);


//     printf("Test 5 :\n\n");

//     char    i[] = "   J'aime les pommes.   ";
//     char    j = ' ';
//     char    **strs5;

//     strs5 = ft_split(i, j);
//     printf("Le texte a split :\"   J'aime les pommes.   \" en fonction de \" \".\n");
//     printf("Ligne 1 : \"%s\"\n", strs5[0]);
//     printf("Ligne 2 : \"%s\"\n", strs5[1]);
//     printf("Ligne 3 : \"%s\"\n", strs5[2]);
//     printf("Ligne 4 : \"%s\"", strs5[3]);
//     // printf("Ligne 4 : \"%s\"", strs5[4]);
//     printf("\n\n");


//     return (0);
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
// 	s1[0] = '\0';

// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }

//---------------------------------------------------------------------------------|
// ---- ft_strlcat -----

// int	main(void)
// {

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

// int	main(void)
// {
// 	char s1[] = "y\200";
// 	char s2[] = "y\0";
// 	printf("Mon ft_memcmp : %d\n", ft_memcmp(s1, s2, 2));
// 	printf("The real one  : %d\n", memcmp(s1, s2, 2));
// 	return (0);
// }

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
	// char	s1[] = "salut ca va ?";
	// char	set1[]= " ,";
	// printf("s1 avant trim : %s\n", s1);
	// printf("s1 apres trim : %s\n", ft_strtrim(s1, set1));

	// printf("----------\n");
	// char	s2[] = " ,, salut ca va ?  , ,";
	// char	set2[]= " ,";
	// printf("s1 avant trim : %s\n", s2);
	// printf("s1 apres trim : %s\n", ft_strtrim(s2, set2));

	// printf("----------\n");
	// char	s3[] = "";
	// char	set3[]= " ";
	// printf("s1 avant trim : %s\n", s3);
	// printf("s1 apres trim : %s\n", ft_strtrim(s3, set3));

	// printf("----------\n");
	// char	s4[] = "salut ca va ?";
	// char	set4[]= "";
	// printf("s1 avant trim : %s\n", s4);
	// printf("s1 apres trim : %s\n", ft_strtrim(s4, set4));

	// printf("----------\n");
	// char	s5[] = ", , , ,   ,,, ,";
	// char	set5[]= " ,";
	// printf("s1 avant trim : %s\n", s5);
	// printf("s1 apres trim : %s\n", ft_strtrim(s5, set5));

	// printf("----------\n");
	// char	s6[] = "entrainement";
	// char	set6[]= "ent";
	// printf("s1 avant trim : %s\n", s6);
	// printf("s1 apres trim : %s\n", ft_strtrim(s6, set6));
// 	return (0);
// }


//---------------------------------------------------------------------------------|
//---- ft_strnstr -----
// int	main(void)
// {

// }

//---------------------------------------------------------------------------------|
//---- ft_strmapi -----

// char	ft_tolower_i(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		c += 32;
// 	return (c);
// }
// int	main(void)
// {
// 	char str[] = "SALut CA vA ?";
// 	printf("%s\n", ft_strmapi(str, &ft_tolower_i));
// 	return (0);
// }


//---------------------------------------------------------------------------------|
//---- ft_striteri -----

// void	ft_tolower_i(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'A' && *c <= 'Z')
// 		*c += 32;
// }
// int	main(void)
// {
// 	char str[] = "SALut CA vA ?";
// 	ft_striteri(str, &ft_tolower_i);
// 	printf("%s\n", str);
// 	return (0);
// }
