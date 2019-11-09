# libft
Create my own implentation of C standard libray function

Part 1.<br>
/* string */

**ft_memset** -  void        *ft_memset(void *str, int c, size_t n);<br>
<pre>           Writes n bytes of value c (converted to an unsigned char) to the string b.<br>           example: ft_memset("Hello World!\n", '#', 4) -> "####o World!\n"</pre>
            
**ft_memcpy** - void	*ft_memcpy(void *s1, const void *s2, size_t n);<br>
<pre>           Copies n bytes from memory area of s2 to s1.<br>           example: s1[30] = "word" , ft_memset(s1, "Hello World!\n", 13) -> "Hello World!\n"</pre>
            
**ft_memccpy** -    void     *ft_memccpy(void *dest, const void *src, int c, size_t n);<br>
<pre>           Copies n bytes from src to dest. If c occurs in src, copy stops and point to<br>           the byte after c in dest is returned. Otherwise, n bytes are copied and null<br>           pointer is returned.</pre>
**ft_memchr**  -    void	*ft_memchr(const void *str, int c, size_t n);
<pre>            Locates the first occurrence of c in string s.<br>            example: ft_memchr("Hello World", o, 11) -> "o World"</pre>
**ft_memmove** - void	*ft_memmove(void *s1, const void *s2, size_t n);
<pre>           Copies n bytes from s2 to s1. The two strings may overlap;<br>            the copy is always done in a non-destructive manner</pre>
**ft_memcmp**  - int		ft_memcmp(const void *str1, const void *str2, size_t n);
<pre>           Returns zero if the two strings are identical,<br>             otherwise returns the difference between the first two differing bytes.<br>             0 length are identical.</pre>
**ft_strlen**  - size_t	ft_strlen(const char *str);
<pre>           Returns the length of a string<br>            example: ft_strlen("hello world") -> 11; </pre>
**ft_strdup**  - char	*ft_strdup(const char *src);
<pre>           Allocates sufficient memory for the string, copies it, and return it.</pre>
**ft_strcpy**  - char	*ft_strcpy(char *s1, const char *s2);
<pre>           Copies s2 to s1 including '\0'</pre>
**ft_strncpy** - char	*ft_strncpy(char *dest, const char *src, unsigned int n);
<pre>           Copy at most n char from src into dest.  If src is less than n char long,<br>           the remainder of dest is filled with `\0' char.  Otherwise, dest is not terminated.</pre>
**ft_strcat**  - char	*ft_strcat(char *dest, char *src);
<pre>           Append a copy of src to the end of dest, then add a '\0'.  The string dest<br>           must have sufficient space to hold the result.</pre>
**ft_strncat** - char	*ft_strncat(char *dest, char *src, int n);
<pre>           Appends not more than n characters from src to dest, and then adds a '\0'.<br>                  The string dest must have sufficient space to hold the result.</pre>
**ft_strlcat** - size_t	ft_strlcat(char *dst, const char *src, size_t n);
<pre></pre>
**ft_strchr**  -
<pre></pre>
**ft_strrchr** -
<pre></pre>
**ft_strstr**  -
<pre></pre>
**ft_strnstr** -
<pre></pre>
**ft_strcmp**  -
<pre></pre>
**ft_strncmp** -
<pre></pre>

/* strings */

ft_bzero   -

/* stdlib */

ft_atoi    -

/* ctype */

ft_isalpha -
ft_isdigit -
ft_isalnum -
ft_isascii -
ft_isprint -
ft_toupper -
ft_tolower -

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
