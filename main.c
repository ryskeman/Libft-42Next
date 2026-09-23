/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernfern <fernfern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:29:42 by fernfern          #+#    #+#             */
/*   Updated: 2026/09/23 16:39:59 by fernfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


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

