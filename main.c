/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernfern <fernfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:29:42 by fernfern          #+#    #+#             */
/*   Updated: 2026/09/24 02:25:57 by fernfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// FT_BZERO
int	main(void)
{
	char	buffer_ft[20];
	char	buffer_original[20];
	size_t	size;

	size = sizeof(buffer_ft);
	for (size_t i = 0; i < size; i++)
	{
		buffer_ft[i] = 'A';
		buffer_original[i] = 'A';
	}
	ft_bzero(buffer_ft, size);
	bzero(buffer_original, size);
	if (memcmp(buffer_ft, buffer_original, size) == 0)
		printf("Los buffers son iguales.\n");
	else
		printf("Los buffers son diferentes.\n");
	return (0);
}

// FT_MEMCHR
int	main(void)
{
	char	str1[] = "Hola mundo";
	char	str2[] = "Ejemplo de texto más largo";
	char	str3[] = "Sin coincidencias aquí";
	char	empty_str[] = "";
	int		char1;
	int		char2;
	int		char3;
	size_t	len1;
	size_t	len2;
	size_t	len3;
	size_t	len4;
	void	*ptr_ft1;
	void	*ptr_std1;
	void	*ptr_ft2;
	void	*ptr_std2;
	void	*ptr_ft3;
	void	*ptr_std3;
	void	*ptr_ft4;
	void	*ptr_std4;
	void	*ptr_ft5;
	void	*ptr_std5;
	void	*ptr_std6;

	// Casos de prueba
	// Caracteres a buscar
	char1 = 'o';
	char2 = 'x';
	char3 = 'z';
	int char4 = '\0'; // Carácter nulo
	// Tamaños a buscar
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = strlen(str3);
	len4 = strlen(empty_str);
	size_t len5 = 5; // Buscar solo los primeros 5 bytes
	// Pruebas
	printf("--- Prueba 1 ---\n");
	ptr_ft1 = ft_memchr(str1, char1, len1);
	ptr_std1 = memchr(str1, char1, len1);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char1, str1, len1);
	printf("ft_memchr devuelve: %p\n", ptr_ft1);
	printf("memchr devuelve:    %p\n", ptr_std1);
	if (ptr_ft1 == ptr_std1)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 2 ---\n");
	ptr_ft2 = ft_memchr(str2, char2, len2);
	ptr_std2 = memchr(str2, char2, len2);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char2, str2, len2);
	printf("ft_memchr devuelve: %p\n", ptr_ft2);
	printf("memchr devuelve:    %p\n", ptr_std2);
	if (ptr_ft2 == ptr_std2)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 3 ---\n");
	ptr_ft3 = ft_memchr(str3, char3, len3);
	ptr_std3 = memchr(str3, char3, len3);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char3, str3, len3);
	printf("ft_memchr devuelve: %p\n", ptr_ft3);
	printf("memchr devuelve:    %p\n", ptr_std3);
	if (ptr_ft3 == ptr_std3)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 4 ---\n");
	ptr_ft4 = ft_memchr(empty_str, char1, len4);
	ptr_std4 = memchr(empty_str, char1, len4);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char1, empty_str, len4);
	printf("ft_memchr devuelve: %p\n", ptr_ft4);
	printf("memchr devuelve:    %p\n", ptr_std4);
	if (ptr_ft4 == ptr_std4)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 5 (longitud limitada) ---\n");
	ptr_ft5 = ft_memchr(str2, 'e', len5);
	ptr_std5 = memchr(str2, 'e', len5);
	printf("Buscando '%c' en los primeros %zu bytes de \"%s\":\n", 'e', len5,
		str2);
	printf("ft_memchr devuelve: %p\n", ptr_ft5);
	printf("memchr devuelve:    %p\n", ptr_std5);
	if (ptr_ft5 == ptr_std5)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 6 (buscar el nulo terminador) ---\n");
	void *ptr_ft6 = ft_memchr(str1, char4, len1 + 1); // Incluimos el nulo
	ptr_std6 = memchr(str1, char4, len1 + 1);
	printf("Buscando el carácter nulo en \"%s\" (longitud %zu):\n", str1, len1
		+ 1);
	printf("ft_memchr devuelve: %p\n", ptr_ft6);
	printf("memchr devuelve:    %p\n", ptr_std6);
	if (ptr_ft6 == ptr_std6)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	return (0);
}

// FT_MEMCMP

int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "Hola";
	char	str3[] = "Holb";
	char	str4[] = "Hol";
	int		result_ft;
	int		result_std;

	// Caso 1: Cadenas iguales
	result_ft = ft_memcmp(str1, str2, 4);
	result_std = memcmp(str1, str2, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, "
    "memcmp = %d\n", str1, str2, result_ft, result_std);
	// Caso 2: Cadenas diferentes en el tercer byte
	result_ft = ft_memcmp(str1, str3, 4);
	result_std = memcmp(str1, str3, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, "
    "memcmp = %d\n", str1, str3, result_ft, result_std);
	// Caso 3: Comparando solo los primeros 3 bytes (son iguales)
	result_ft = ft_memcmp(str1, str4, 3);
	result_std = memcmp(str1, str4, 3);
	printf("Comparando \"%s\" y \"%s\" (3 bytes): Resultado ft_memcmp = %d, "
    "memcmp = %d\n", str1, str4, result_ft, result_std);
	// Caso 4: Comparando más bytes de los que tiene la segunda cadena
	result_ft = ft_memcmp(str1, str4, 4);
	result_std = memcmp(str1, str4, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, "
    "memcmp = %d\n", str1, str4, result_ft, result_std);
	return (0);
}

// FT_MEMCPY

int	main(void)
{
	char	*src;
	char	dest_ft[20];
	char	dest_original[20];
	size_t	size;

	src = "Hola mundo";
	size = strlen(src) + 1;
	memset(dest_ft, 'A', sizeof(dest_ft));
	memset(dest_original, 'B', sizeof(dest_original));
	ft_memcpy(dest_ft, src, size);
	memcpy(dest_original, src, size);
	if (memcmp(dest_ft, dest_original, size) == 0)
		printf("Los buffers son iguales.\n");
	else
		printf("Los buffers son diferentes.\n");
	printf("ft_memcpy: %s\n", dest_ft);
	printf("memcpy:  %s\n", dest_original);
	return (0);
}

// FT_MEMMOVE

int	main(void) {
	char	str1[] = "Hola, mundo!";
	char	str2[] = "Hola, mundo!";
	char	str3[] = "Hola, mundo!";
	char	str4[] = "Hola, mundo!";

	// Prueba 1: Solapamiento dst > src
	ft_memmove(str1 + 2, str1, 10);
	memmove(str2 + 2, str2, 10);
	printf("Prueba 1 (dst > src): ft_memmove = %s, memmove = %s\n", str1, str2);

	// Prueba 2: Solapamiento dst < src
	ft_memmove(str3, str3 + 5, 6);
	memmove(str4, str4 + 5, 6);
	printf("Prueba 2 (dst < src): ft_memmove = %s, memmove = %s\n", str3, str4);

	// Prueba 3: Sin solapamiento
	char	str5[] = "abcdefghij";
	char	str6[] = "abcdefghij";
	ft_memmove(str5 + 5, str5, 5);
	memmove(str6 + 5, str6, 5);
	printf("Prueba 3 (sin solapamiento): ft_memmove = %s, memmove = %s\n", str5,
		str6);

	// Prueba 4: len = 0
	char	str7[] = "abcdefghij";
	char	str8[] = "abcdefghij";
	ft_memmove(str7 + 2, str7, 0);
	memmove(str8 + 2, str8, 0);
	printf("Prueba 4 (len = 0): ft_memmove = %s, memmove = %s\n", str7, str8);

	// Prueba 5: dst == src
	char	str9[] = "abcdefghij";
	char	str10[] = "abcdefghij";
	ft_memmove(str9, str9, 5);
	memmove(str10, str10, 5);
	printf("Prueba 5 (dst == src): ft_memmove = %s, memmove = %s\n", str9,
		str10);

	return (0);
}

// FT_MEMSET

int	main(void)
{
	// *** Definición del caso de prueba ***
	char	buffer_orig[20] = "abcdefghijklmnopqr";
	char	buffer_tu[20] = "abcdefghijklmnopqr";
	int	valor_llenado = 'X';
	size_t	num_bytes = 10;

	// *** Ejecución de las funciones ***
	memset(buffer_orig, valor_llenado, num_bytes);
	ft_memset(buffer_tu, valor_llenado, num_bytes);

	// *** Comparación de los resultados ***
	if (memcmp(buffer_orig, buffer_tu, sizeof(buffer_orig)) == 0)
	{
		printf("[OK] ft_memset('%c', %zu bytes) coincide con memset.\n",
			valor_llenado, num_bytes);
		printf("Resultado: %s\n", buffer_tu);
	}
	else
	{
		printf("[FALLA] ft_memset('%c', %zu bytes) NO coincide con memset.\n",
			valor_llenado, num_bytes);
		printf("memset resultado: %s\n", buffer_orig);
		printf("ft_memset resultado: %s\n", buffer_tu);
	}

	return (0);
}


// FT_STRRCHR

int	main(void)
{
	char cadena[] = "Hola, mundo! oHola";
	char caracter_a_buscar = 'o';
	char *resultado_ft;
	char *resultado_original;

	// Buscar la última aparición del carácter 'o'
	resultado_ft = ft_strrchr(cadena, caracter_a_buscar);
	resultado_original = strrchr(cadena, caracter_a_buscar);

	printf("Cadena: \"%s\"\n", cadena);
	printf("Carácter buscado: '%c'\n", caracter_a_buscar);

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);clear

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	// Buscar el carácter '\0'
	resultado_ft = ft_strrchr(cadena, '\0');
	resultado_original = strrchr(cadena, '\0');

	printf("\nCarácter buscado: '\\0'\n");

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	// Buscar un carácter que no existe
	caracter_a_buscar = 'z';
	resultado_ft = ft_strrchr(cadena, caracter_a_buscar);
	resultado_original = strrchr(cadena, caracter_a_buscar);

	printf("\nCarácter buscado: '%c'\n", caracter_a_buscar);

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	return (0);
}

// FT_STRLCAT

int	main(void)
{
	char	dst_ft[20];
	char	dst_original[20];
	char	src[] = "mundo!";
	size_t	size;
	size_t	result_ft;
	size_t	result_original;

	// Caso 1: size > dst_len + src_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = sizeof(dst_ft);
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 1: size > dst_len + src_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 2: size < dst_len + src_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 10;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 2: size < dst_len + src_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 3: size == dst_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 5;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 3: size == dst_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 4: size == 0
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 0;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 4: size == 0\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 5: src es una cadena vacía
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = sizeof(dst_ft);
	result_ft = ft_strlcat(dst_ft, "", size);
	result_original = strlcat(dst_original, "", size);
	printf("Caso 5: src es una cadena vacía\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	return (0);
}

// FT_STRLCPY

int	main(void)
{
	char	*src;
	char	dst_ft[20];
	char	dst_original[20];
	size_t	size;
	size_t	result_ft;
	size_t	result_original;

	src = "Hola, mundo!";
	size = 10;
	// Caso 1: size < strlen(src)
	memset(dst_ft, 'A', sizeof(dst_ft));
	// Inicializa para detectar posibles errores
	memset(dst_original, 'A', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("Caso 1: size < strlen(src)\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 2: size > strlen(src)
	size = 20;
	memset(dst_ft, 'B', sizeof(dst_ft));
	memset(dst_original, 'B', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 2: size > strlen(src)\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 3: size = 0
	size = 0;
	memset(dst_ft, 'C', sizeof(dst_ft));
	memset(dst_original, 'C', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 3: size = 0\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 4: size = 1
	size = 1;
	memset(dst_ft, 'D', sizeof(dst_ft));
	memset(dst_original, 'D', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 4: size = 1\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	return (0);
}

// FT_STRNCMP

int	main(void)
{
	char s1[] = "abc";
	char s2[] = "ab";
	printf("value of real function: %d\n", strncmp(s1, s2, 5));
	printf("value of own function: %d", ft_strncmp(s1, s2, 5));
	return (0);
}

// FT_SRTNSTR
int	main(void)
{
	printf("value of real function: %s\n", strnstr("abaac", "aac", 5));
	printf("value of own function: %s\n", ft_strnstr("abaac", "aac", 5));
}


// FT_STRCHR

int	main(void)
{
	char	cadena[] = "Hola, mundo!";
	char	caracter_a_buscar;
	char	*resultado_ft;
	char	*resultado_original;

	caracter_a_buscar = 'm';
	// Buscar el carácter 'm'
	resultado_ft = ft_strchr(cadena, caracter_a_buscar);
	resultado_original = strchr(cadena, caracter_a_buscar);
	printf("Cadena: \"%s\"\n", cadena);
	printf("Carácter buscado: '%c'\n", caracter_a_buscar);
	printf("ft_strchr: %p\n", resultado_ft);
	printf("strchr:    %p\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	// Buscar el carácter '\0'
	resultado_ft = ft_strchr(cadena, '\0');
	resultado_original = strchr(cadena, '\0');
	printf("\nCarácter buscado: '\\0'\n");
	printf("ft_strchr: %p\n", resultado_ft);
	printf("strchr:    %p\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	// Buscar un carácter que no existe
	caracter_a_buscar = 'z';
	resultado_ft = ft_strchr(cadena, caracter_a_buscar);
	resultado_original = strchr(cadena, caracter_a_buscar);
	printf("\nCarácter buscado: '%c'\n", caracter_a_buscar);
	printf("ft_strchr: %s\n", resultado_ft);
	printf("strchr:    %s\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	return (0);
}

// FT_TOLOWER

int     main(void)
{
        int     c = 'C';
        int     d = 'd';

        printf ("Con mi funcion: %c -> %c\n",c ,ft_tolower(c));
        printf ("Con la original: %c -> %c\n",c ,tolower(c));
        printf ("Mi funcion: %c -> %c\n",d ,ft_tolower(d));
        printf ("Original: %c - > %c\n",d ,tolower(d));

        return (0);
}

// FT_TOUPPER

int	main(void)
{
	int	c = 'C';
	int	d = 'd';

	printf ("Con mi funcion: %c -> %c\n",c ,ft_toupper(c));
	printf ("Con la original: %c -> %c\n",c ,toupper(c));
	printf ("Mi funcion: %c -> %c\n",d ,ft_toupper(d));
	printf ("Original: %c - > %c\n",d ,toupper(d));

	return (0);
}
