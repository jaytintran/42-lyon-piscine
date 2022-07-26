unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int size = 6;
	unsigned int result;

	printf("---/ndest = %s\nsrc = %s\nsize = %d\n\n", dest, src, size);
	result = ft_strlcat(dest, src, size);
	printf("---/ndest (after catted)  = %s\nsrc = %s\nresult = %d\n\n", dest, src, result);
}
