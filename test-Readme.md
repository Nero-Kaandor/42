*This project has been created as part of the 42 curriculum by catsin-k.*

# Libft



## 1. Description

Libft is a personal implementation of various standard C library functions. The project is designed to provide a custom, reusable library containing essential functions that are typically used in C programming. These include string manipulation functions, memory management, character handling, and a linked list data structure. The goal of this project is to develop a deeper understanding of how fundamental C functions work and to practice the correct use of pointers and memory management.

Functions are categorized as follows:

- **Character functions** for character checks and transformations.
- **String functions** for string manipulation and comparisons.
- **Memory functions** for efficient memory handling.
- **Additional functions** like substring extraction, string concatenation, and number-to-string conversion.
- **Linked list functions** for implementing basic linked list operations, such as adding, removing, and traversing nodes.

Libft serves as the foundation for other 42 projects and is commonly used in projects requiring fundamental operations like string handling and memory management.



## 2. Instructions

To compile the library, you can use the provided `Makefile` to generate the static library `libft.a`. Follow these steps:

1. Clone this repository to your local machine using:
```bash
git clone https://github.com/yourusername/libft.git
```

2. Navigate to the libft directory and compile the library:
```bash
cd libft
```

3. Run `make` to compile the library:
```bash
make
```
This will generate the `libft.a` static library.

4. To clean up object files, run:
```bash
make clean

```
5. To remove all generated files (including the library), run:
```bash
make fclean
```

6. To rebuild from scratch, run:
```bash
make re
```


### 2.a. Usage
To use the libft functions in your project, include the libft.h header file in your source code and link against the libft.a library during compilation.

<Example:>
```c
#include "libft.h"

int main() {
    char *str = "Hello, Kaandor!";
    int len = ft_strlen(str); // Using ft_strlen from Libft
    ft_putnbr_fd(len, 1); // Print the length to standard output
    return 0;
}

```


### 2.b. Makefile Overview

**CC**: Compiler (`gcc`)

**CFLAGS**: Compiler flags (`-Wall -Wextra -Werror`)

**AR**: Archive command to create `libft.a`

**SRC**: List of source files

**OBJ**: Object files corresponding to the source files

Common `make` commands:

`make`: Compiles the library (`libft.a`)

`make clean`: Removes object files

`make fclean`: Removes object files and the library

`make re`: Rebuilds the library from scratch.


- `.PHONY` targets:
    In the Makefile, .PHONY is used to indicate that certain targets are not associated with actual files. This prevents conflicts in case files with the     same name as the targets exist in the directory. The .PHONY targets in this project are:
    ```Makefile
    .PHONY: all clean fclean re
    ```
    `make all`: Builds the library

    `make clean`: Removes object files

    `make fclean`: Removes object files and the library

    `make re`: Rebuilds the library from scratch



## 3. Resources
This project builds on concepts from C programming, especially around pointers, memory management, and data structures. Here are some useful resources to further understand the topics covered in this project:

- <ins>C Programming Language: Mastering Procedural Programming (with Practical Exercises) (3rd edition) - Book by Frederic Drouillon</ins>
- <ins>The information from the terminal man pages</ins>
- <ins>[Doc Ubuntu](https://doc.ubuntu-fr.org)</ins>
- <ins>[Docs GitHub](https://docs.github.com/fr)</ins>
- <ins>[KooR.fr](https://koor.fr/)</ins>
