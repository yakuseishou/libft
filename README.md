# libft
Create my own implentation of C standard libray function

Part 1.
/* string */

**ft_memset** -  void        *ft_memset(void *str, int c, size_t n);<br>
<pre>           writes n bytes of value c (converted to an unsigned char) to the string b.<br>
            example: ft_memset("Hello World!\n", '#', 4) -> "####o World!\n"</pre>
            
**ft_memcpy** - void	*ft_memcpy(void *s1, const void *s2, size_t n);<br>
<pre>           Copies n bytes from memory area of s2 to s1.<br>
            example: s1[30] = "word" , ft_memset(s1, "Hello World!\n", 13) -> "Hello World!\n"</pre>
            
ft_memccpy - 
ft_memchr
ft_memmove
ft_memcmp
ft_strlen
ft_strdup
ft_strcpy
ft_strncpy
ft_strcat
ft_strncat
ft_strlcat
ft_strchr
ft_strrchr
ft_strstr
ft_strnstr
ft_strcmp
ft_strncmp

/* strings */

ft_bzero

/* stdlib */

ft_atoi

/* ctype */

ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower

Part 2.

ft_memalloc
ft_memdel
ft_strnew
ft_strdel
ft_strclr
ft_striter
ft_striteri
ft_strmap
ft_strmapi
ft_strequ
ft_strnequ
ft_strsub
ft_strjoin
ft_strtrim
ft_strsplit
ft_itoa

/* output */

ft_putchar
ft_putstr
ft_putendl
ft_putnbr
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd

Bounus.

ft_lstnew
ft_lstdelone
ft_lstdel
ft_lstadd
ft_lstiter
ft_lstmap
