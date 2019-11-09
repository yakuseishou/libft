# libft
Create my own implentation of C standard libray function

Part 1.<br>
/* string */

**ft_memset** -  <pre>void     *ft_memset(void *str, int c, size_t n);</pre>
<pre>           Writes n bytes of value c (converted to an unsigned char) to the string b.<br>           Example: ft_memset("Hello World!\n", '#', 4) -> "####o World!\n"</pre>
            
**ft_memcpy** - <pre>void	*ft_memcpy(void *s1, const void *s2, size_t n);</pre>
<pre>           Copies n bytes from memory area of s2 to s1.<br>           Example: s1[30] = "word" , ft_memset(s1, "Hello World!\n", 13) -> "Hello World!\n"</pre>
            
**ft_memccpy** -   <pre>void    *ft_memccpy(void *dest, const void *src, int c, size_t n);</pre>
<pre>           Copies n bytes from src to dest. If c occurs in src, copy stops and point to<br>           the byte after c in dest is returned. Otherwise, n bytes are copied and null<br>           pointer is returned.</pre>
**ft_memchr**  -    <pre>void	*ft_memchr(const void *str, int c, size_t n);</pre>
<pre>            Locates the first occurrence of c in string s.<br>            Example: ft_memchr("Hello World", o, 11) -> "o World"</pre>
**ft_memmove** - <pre>void	*ft_memmove(void *s1, const void *s2, size_t n);</pre>
<pre>           Copies n bytes from s2 to s1. The two strings may overlap;<br>           the copy is always done in a non-destructive manner</pre>
**ft_memcmp**  - <pre>int	ft_memcmp(const void *str1, const void *str2, size_t n);</pre>
<pre>           Returns zero if the two strings are identical,<br>           otherwise returns the difference between the first two differing bytes.<br>           0 length are identical.</pre>
**ft_strlen**  - <pre>size_t	ft_strlen(const char *str);</pre>
<pre>           Returns the length of a string<br>           Example: ft_strlen("hello world") -> 11; </pre>
**ft_strdup**  - <pre>char	*ft_strdup(const char *src);</pre>
<pre>           Allocates sufficient memory for the string, copies it, and return it.</pre>
**ft_strcpy**  - <pre>char	*ft_strcpy(char *s1, const char *s2);</pre>
<pre>           Copies s2 to s1 including '\0'</pre>
**ft_strncpy** - <pre>char	*ft_strncpy(char *dest, const char *src, unsigned int n);</pre>
<pre>           Copy at most n char from src into dest.  If src is less than n char long,<br>           the remainder of dest is filled with `\0' char.  Otherwise, dest is not terminated.</pre>
**ft_strcat**  - <pre>char	*ft_strcat(char *dest, char *src);</pre>
<pre>           Append a copy of src to the end of dest, then add a '\0'.  The string dest<br>           must have sufficient space to hold the result.</pre>
**ft_strncat** - <pre>char	*ft_strncat(char *dest, char *src, int n);</pre>
<pre>           Appends not more than n characters from src to dest, and then adds a '\0'.<br>           The string dest must have sufficient space to hold the result.</pre>
**ft_strlcat** - <pre>size_t	ft_strlcat(char *dst, const char *src, size_t n);</pre>
<pre></pre>
**ft_strchr**  - <pre>char	*ft_strchr(const char *str, int c);</pre>
<pre></pre>
**ft_strrchr** - <pre>char	*ft_strrchr(const char *str, int c);</pre>
<pre></pre>
**ft_strstr**  - <pre>char	*ft_strstr(const char *str, const char *to_find);</pre>
<pre></pre>
**ft_strnstr** - <pre>char	*ft_strnstr(const char *b, const char *s, size_t n);</pre>
<pre></pre>
**ft_strcmp**  - <pre>int	ft_strcmp(const char *s1, const char *s2);</pre>
<pre></pre>
**ft_strncmp** - int	ft_strncmp(const char *s1, const char *s2, size_t n);
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
