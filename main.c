/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arudy <arudy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:14:22 by arudy             #+#    #+#             */
/*   Updated: 2021/11/23 13:20:05 by arudy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//---- ft_substr -----
// int	main(void)
// {
// printf("%s\n", ft_substr("Salut ca va ?", 4, 6));
// return (0);
// }

// ---- ft_bzero -----

// int	main(void)
// {
// char	a[] = "Salut ca va";
// char	b[] = "Salut ca va";

// t_bzero(a, 4);
// bzero(b, 4);
// printf("Mon ft_bzero : %c %c %c %c %c %c", a[0], a[1], a[2], a[3], a[4], a[5]);
// printf("\n\n");
// printf("Vrai bzero : '%c %c %c %c %c %c", b[0], b[1], b[2], b[3], b[4], b[5]);
// return (0);
// }

// ---- ft_split -----

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

// ---- ft_itoa -----

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// 	return (0);
// }

// ---- ft_strjoin -----

// int	main(void)
// {
// 	char	*s1 = "";
// 	char	*s2 = "salut";

// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }

// ---- ft_strlcat -----

// int	main(void)
// {
// 	char s1a[10] = "Test1";
// 	char s2a[] = "OK";

// 	printf("%d\n", ft_strlcat(s1a, s2a, 6));
// 	return (0);
// }

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

//---- ft_memcpy -----
int main(void)
{
	int	i = 0;
	int	src[] = {1, 2, 3, 4, 5};
	int	*dest;
	int	size = 5;

	dest = malloc(sizeof(int) * size);
	ft_memcpy(dest, src, size);
	while (i < size)
	{
		printf("%d\n", dest[i]);
		i++;
	}
    return (0);
}

