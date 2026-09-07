# Libft 📚

This repository contains my implementation of **libft**, the first project at 42 School. The goal of this project is to create a custom C library containing a set of standard `libc` functions, along with additional utility functions for string manipulation, memory management, and linked lists.

## 🛠️ Features

The library is divided into three main sections:

### Part 1: Libc Functions

Re-implementations of standard C library functions (without using the actual standard library).

- **Memory:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Strings:** `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- **Type checking/Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### Part 2: Additional Functions

Custom utility functions for easier string and memory manipulation.

- **Memory Allocation:** `ft_memalloc`, `ft_memdel`
- **String Manipulation:** `ft_strnew`, `ft_strdel`, `ft_strclr`, `ft_striter`, `ft_striteri`, `ft_strmap`, `ft_strmapi`, `ft_strequ`, `ft_strnequ`, `ft_strsub`, `ft_strjoin`, `ft_strtrim`, `ft_strsplit`
- **Conversion:** `ft_itoa`
- **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Standard Output:** `ft_putchar`, `ft_putstr`, `ft_putendl`, `ft_putnbr`

### Bonus Part: Linked Lists

Functions to initialize and manipulate a custom linked list structure (`t_list`).

- `ft_lstnew`, `ft_lstdelone`, `ft_lstdel`, `ft_lstadd`, `ft_lstiter`, `ft_lstmap`

## 🚀 Getting Started

### Prerequisites

- `gcc` or `clang` compiler
- `make`

### Installation & Usage

1. **Clone the repository:**

   ```bash
   git clone https://github.com/Khantdotcom/libft.git
   cd libft
   ```
