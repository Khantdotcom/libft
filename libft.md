Automatic Zoom Libft Your very own library **V.3 Part 2 - Additional functions**

In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to facilitate the writing of Part 1's functions.

- **ft_memalloc**

- **Prototype:** `void * ft_memalloc(size_t size);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" memory area. The allocated memory is initialized to 0. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The size of the memory area to allocate.

- **Return:** The allocated memory area.

- **Libc functions:** `malloc(3)`

- **ft_memdel**

- **Prototype:** `void ft_memdel(void **ap);`

- **Description:** Takes as a parameter the address of a pointer whose pointed area needs to be freed with `free(3)`, then the pointer is set to `NULL`.

- **Param. #1:** The address of a pointer whose memory needs to be freed and then set to `NULL`.

- **Return:** None.

- **Libc functions:** `free(3)`

- **ft_strnew**

- **Prototype:** `char * ft_strnew(size_t size);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" string ending with a `'\0'`. Each character of the string is initialized to `'\0'`. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The size of the string to allocate.

- **Return:** The allocated string initialized to 0.

- **Libc functions:** `malloc(3)`

- **ft_strdel**

- **Prototype:** `void ft_strdel(char **as);`

- **Description:** Takes as a parameter the address of a string that needs to be freed with `free(3)` and its pointer set to `NULL`.

- **Param. #1:** The address of the string whose memory needs to be freed and its pointer set to `NULL`.

- **Return:** None.

- **Libc functions:** `free(3)`

- **ft_strclr**

- **Prototype:** `void ft_strclr(char *s);`

- **Description:** Assigns the value `'\0'` to all characters of the string passed as a parameter.

- **Param. #1:** The string to clear.

- **Return:** None.

- **Libc functions:** None.

- **ft_striter**

- **Prototype:** `void ft_striter(char *s, void (*f)(char *));`

- **Description:** Applies the function `f` to each character of the string passed as a parameter. Each character is passed by address to the function `f` so it can be modified if necessary.

- **Param. #1:** The string to iterate over.

- **Param. #2:** The function to call on each character of `s`.

- **Return:** None.

- **Libc functions:** None.

- **ft_striteri**

- **Prototype:** `void ft_striteri(char *s, void (*f)(unsigned int, char *));`

- **Description:** Applies the function `f` to each character of the string passed as a parameter, specifying its index as the first argument. Each character is passed by address to the function `f` so it can be modified if necessary.

- **Param. #1:** The string to iterate over.

- **Param. #2:** The function to call on each character of `s` and its index.

- **Return:** None.

- **Libc functions:** None.

- **ft_strmap**

- **Prototype:** `char * ft_strmap(char const *s, char (*f)(char));`

- **Description:** Applies the function `f` to each character of the string passed as a parameter to create a new "fresh" string (with `malloc(3)`) resulting from the successive applications of `f`.

- **Param. #1:** The string to iterate over.

- **Param. #2:** The function to call on each character of `s`.

- **Return:** The "fresh" string resulting from the successive applications of `f`.

- **Libc functions:** `malloc(3)`

- **ft_strmapi**

- **Prototype:** `char * ft_strmapi(char const *s, char (*f)(unsigned int, char));`

- **Description:** Applies the function `f` to each character of the string passed as a parameter, specifying its index, to create a new "fresh" string (with `malloc(3)`) resulting from the successive applications of `f`.

- **Param. #1:** The string to iterate over.

- **Param. #2:** The function to call on each character of `s` specifying its index.

- **Return:** The "fresh" string resulting from the successive applications of `f`.

- **Libc functions:** `malloc(3)`

- **ft_strequ**

- **Prototype:** `int ft_strequ(char const *s1, char const *s2);`

- **Description:** Lexicographically compares `s1` and `s2`. If the two strings are identical, the function returns 1, or 0 otherwise.

- **Param. #1:** The first string to compare.

- **Param. #2:** The second string to compare.

- **Return:** 1 or 0 depending on whether the two strings are identical or not.

- **Libc functions:** None.

- **ft_strnequ**

- **Prototype:** `int ft_strnequ(char const *s1, char const *s2, size_t n);`

- **Description:** Lexicographically compares `s1` and `s2` up to a maximum of `n` characters or until a `'\0'` has been reached. If the two strings are identical, the function returns 1, or 0 otherwise.

- **Param. #1:** The first string to compare.

- **Param. #2:** The second string to compare.

- **Param. #3:** The maximum number of characters to compare.

- **Return:** 1 or 0 depending on whether the two strings are identical or not.

- **Libc functions:** None.

- **ft_strsub**

- **Prototype:** `char * ft_strsub(char const *s, unsigned int start, size_t len);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" copy of a substring from the string passed as a parameter. The substring begins at index `start` and has a length of `len`. If `start` and `len` do not designate a valid substring, the behavior is undefined. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The string from which to copy the substring.

- **Param. #2:** The index in the string where the substring to copy begins.

- **Param. #3:** The length of the substring to copy.

- **Return:** The substring.

- **Libc functions:** `malloc(3)`

- **ft_strjoin**

- **Prototype:** `char * ft_strjoin(char const *s1, char const *s2);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" string ending with a `'\0'` resulting from the concatenation of `s1` and `s2`. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The prefix string.

- **Param. #2:** The suffix string.

- **Return:** The "fresh" string resulting from the concatenation of the two strings.

- **Libc functions:** `malloc(3)`

- **ft_strtrim**

- **Prototype:** `char * ft_strtrim(char const *s);`

- **Description:** Allocates (with `malloc(3)`) and returns a copy of the string passed as a parameter without whitespaces at the beginning and the end of the string. The characters `' '`, `'\n'`, and `'\t'` are considered whitespaces. If `s` does not contain whitespaces at the beginning or the end, the function returns a copy of `s`. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The string to trim.

- **Return:** The "fresh" trimmed string or a copy of `s`.

- **Libc functions:** `malloc(3)`

- **ft_strsplit**

- **Prototype:** `char ** ft_strsplit(char const *s, char c);`

- **Description:** Allocates (with `malloc(3)`) and returns an array of "fresh" strings (all ending with a `'\0'`, including the array itself) resulting from splitting `s` using the character `c` as a delimiter. If the allocation fails, the function returns `NULL`. Example: `ft_strsplit("*hello*fellow***students*", '*')` returns the array `["hello", "fellow", "students"]`.

- **Param. #1:** The string to split.

- **Param. #2:** The delimiter character to split the string by.

- **Return:** The array of "fresh" strings resulting from the split.

- **Libc functions:** `malloc(3)`, `free(3)`

- **ft_itoa**

- **Prototype:** `char * ft_itoa(int n);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" string ending with a `'\0'` representing the integer `n` passed as a parameter. Negative numbers must be supported. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The integer to convert to a string.

- **Return:** The string representing the integer passed as a parameter.

- **Libc functions:** `malloc(3)`

- **ft_putchar**

- **Prototype:** `void ft_putchar(char c);`

- **Description:** Outputs the character `c` to the standard output.

- **Param. #1:** The character to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putstr**

- **Prototype:** `void ft_putstr(char const *s);`

- **Description:** Outputs the string `s` to the standard output.

- **Param. #1:** The string to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putendl**

- **Prototype:** `void ft_putendl(char const *s);`

- **Description:** Outputs the string `s` to the standard output followed by a `'\n'`.

- **Param. #1:** The string to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putnbr**

- **Prototype:** `void ft_putnbr(int n);`

- **Description:** Outputs the integer `n` to the standard output.

- **Param. #1:** The integer to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putchar_fd**

- **Prototype:** `void ft_putchar_fd(char c, int fd);`

- **Description:** Outputs the character `c` to the file descriptor `fd`.

- **Param. #1:** The character to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putstr_fd**

- **Prototype:** `void ft_putstr_fd(char const *s, int fd);`

- **Description:** Outputs the string `s` to the file descriptor `fd`.

- **Param. #1:** The string to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putendl_fd**

- **Prototype:** `void ft_putendl_fd(char const *s, int fd);`

- **Description:** Outputs the string `s` to the file descriptor `fd` followed by a `'\n'`.

- **Param. #1:** The string to output.

- **Return:** None.

- **Libc functions:** `write(2)`

- **ft_putnbr_fd**

- **Prototype:** `void ft_putnbr_fd(int n, int fd);`

- **Description:** Outputs the integer `n` to the file descriptor `fd`.

- **Param. #1:** The integer to output.

- **Return:** None.

- **Libc functions:** `write(2)`

---

### Chapter VI

**Bonus part**

If you perfectly completed the mandatory part, this section offers some ideas to go further. A bit like buying a DLC for a video game. Having functions to manipulate raw memory and strings is very handy, but you'll quickly realize that having functions to manipulate lists is even more practical.

You will use the following structure to represent the nodes of your list. This structure must be added to your `libft.h` file.

```c
typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;
```

The description of the `t_list` structure fields is as follows:

- `content`: The data contained in the node. The `void *` allows storing any type of data.
- `content_size`: The size of the stored data. Since the `void *` type doesn't allow knowing the size of the pointed data, it is necessary to save its size. For example, the string `"42"` has a size of 3 bytes, and the 32-bit integer `42` has a size of 4 bytes.
- `next`: The address of the next node in the list or `NULL` if the node is the last one.

The following functions will allow you to manipulate your lists easily.

- **ft_lstnew**

- **Prototype:** `t_list * ft_lstnew(void const *content, size_t content_size);`

- **Description:** Allocates (with `malloc(3)`) and returns a "fresh" node. The `content` and `content_size` fields of the new node are initialized by a copy of the function's parameters. If the `content` parameter is null, the `content` field is initialized to `NULL` and the `content_size` field is initialized to 0 regardless of the value of the `content_size` parameter. The `next` field is initialized to `NULL`. If the allocation fails, the function returns `NULL`.

- **Param. #1:** The content to add to the new node.

- **Param. #2:** The size of the content to add to the new node.

- **Return:** The new node.

- **Libc functions:** `malloc(3)`, `free(3)`

- **ft_lstdelone**

- **Prototype:** `void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));`

- **Description:** Takes as a parameter the address of a pointer to a node and frees the memory of this node's content using the `del` function passed as a parameter, then frees the memory of the node itself with `free(3)`. The memory of the `next` field must never be freed. Finally, the pointer to the now freed node must be set to `NULL` (similarly to the `ft_memdel` function from the mandatory part).

- **Param. #1:** The address of a pointer to the node to free.

- **Return:** None.

- **Libc functions:** `free(3)`

- **ft_lstdel**

- **Prototype:** `void ft_lstdel(t_list **alst, void (*del)(void *, size_t));`

- **Description:** Takes as a parameter the address of a pointer to a node and frees the memory of this node and all its successors one by one using `del` and `free(3)`. Finally, the pointer to the first now-freed node must be set to `NULL` (similarly to the `ft_memdel` function from the mandatory part).

- **Param. #1:** The address of a pointer to the first node of a list to free.

- **Return:** None.

- **Libc functions:** `free(3)`

- **ft_lstadd**

- **Prototype:** `void ft_lstadd(t_list **alst, t_list *new);`

- **Description:** Adds the element `new` at the beginning of the list.

- **Param. #1:** The address of a pointer to the first node of a list.

- **Param. #2:** The node to add at the beginning of this list.

- **Return:** None.

- **Libc functions:** None.

- **ft_lstiter**

- **Prototype:** `void ft_lstiter(t_list *lst, void (*f)(t_list *elem));`

- **Description:** Iterates the list `lst` and applies the function `f` to each node.

- **Param. #1:** A pointer to the first node of a list.

- **Param. #2:** The address of a function to apply to each node of the list.

- **Return:** None.

- **Libc functions:** None.

- **ft_lstmap**

- **Prototype:** `t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));`

- **Description:** Iterates the list `lst` and applies the function `f` to each node to create a new "fresh" list (with `malloc(3)`) resulting from the successive applications. If an allocation fails, the function returns `NULL`.

- **Param. #1:** A pointer to the first node of a list.

- **Param. #2:** The address of a function to apply to each node of the list to create a new list.

- **Return:** The new list.

- **Libc functions:** `malloc(3)`, `free(3)`.

If you perfectly successfully complete the mandatory and bonus parts, you are encouraged to add other functions you deem useful to expand your library. Examples: a version of `ft_strsplit` that returns a list of strings instead of an array of strings, the function `ft_lstfold` similar to Python's `reduce` function and OCaml's `List.fold_left` function (watch out for memory leaks!), functions to manipulate arrays, stacks, queues, maps, hash tables, etc. The limit is your imagination.

---

### Chapter VII

**Submission and peer-evaluation**

Submit your work to your GiT repository as usual. Only the work present on your repository will be evaluated.

**If and only if you are completing this project as part of the remote piscine:** Your work will be evaluated by a Moulinette only.

**Otherwise:** Once your defenses are completed, a Moulinette will run over your submission. Your final grade will be calculated by taking into account the grades you received in peer-evaluation and the Moulinette's grade.

The Moulinette will grade all your exercises following the structure given in this subject (part1, part2, bonus). An error in one of the parts will systematically trigger the immediate halt of the point counting for the following parts.

Good luck to everyone and don't forget your `auteur` file!