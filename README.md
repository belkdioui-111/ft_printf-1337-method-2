# ft_printf - Custom printf implementation  - methode 2

Welcome to my ft_printf repository! This project represents my own implementation of the printf function in C, providing formatted output with various specifiers and conversions using a variadic function.
To use this implementation, include ft_printf.h in your C projects.

## Usage

```
#include "ft_printf.h"

int ft_printf(const char *s, ...);
```
The ft_printf function mimics the behavior of the standard printf function, utilizing a variadic function for handling a variable number of arguments.

## Makefile
This implementation includes a Makefile for easy compilation:

```
make
```
Compiles the ft_printf library.

```
make clean
```
Removes object files.

```
make fclean
```
Removes object files and the library.

```
make re
```
Rebuilds the entire project.

## Note
This implementation leverages variadic functions and includes a Makefile for seamless compilation. Contributions and feedback are welcome to enhance and refine this custom printf implementation.

Happy formatting with ft_printf!
