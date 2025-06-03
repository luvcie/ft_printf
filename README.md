# ft_printf

A custom implementation of the C standard library `printf` function, created as part of the 42 School curriculum.

## Description

ft_printf recreates the behavior of `printf` with support for the most common format specifiers.
The function uses variadic arguments to handle multiple parameters and returns the total number of characters printed.

## Supported Format Specifiers

- `%c` - Single character
- `%s` - String
- `%p` - Pointer in hexadecimal format
- `%d` - Decimal number
- `%i` - Integer
- `%u` - Unsigned decimal
- `%x` - Hexadecimal (lowercase)
- `%X` - Hexadecimal (uppercase)
- `%%` - Percent sign

## Project Structure

```
ft_printf/
├── ft_printf.c              // Main function and format dispatcher
├── ft_printf.h
├── tools/
│   ├── ft_printf_helpers.c  // String and integer handlers
│   ├── moar_helpers.c       // Numeric conversion handlers
│   └── libft/               // Custom utility library
├── Makefile
└── tests.c
```

## Usage

Include the header and call `ft_printf` like the standard `printf`:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "World", 42);
    return (0);
}
```

## Features

- **Error Handling**: Returns -1 for NULL input or incomplete format specifiers
- **Memory Management**: Proper allocation and cleanup for string conversions
- **Edge Cases**: Handles NULL pointers, zero values, and boundary conditions

## Testing

The project includes comprehensive tests covering all format specifiers and edge cases.

```bash
cc -Wall -Wextra -Werror tests.c -L. -lftprintf
```

## 42 School Project

This project is part of the 42 School common core curriculum, focusing on:
- Variadic functions
- Format string parsing
- Memory management
- Modular programming
