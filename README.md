<a href="https://github.com/francfer-art/42Printf">
  <img src="https://raw.githubusercontent.com/15Galan/42_project-readmes/master/banners/cursus/projects/ft_printf-dark.png">
</a>

<p align="center">
  <a href="https://github.com/francfer-art/42Printf">
  <img src="https://raw.githubusercontent.com/mcombeau/mcombeau/main/42_badges/ft_printfe.png">
  </a>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Score-100%2F100-brightgreen" alt="Printf Score">
</p>

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Welcome to ft_printf! This project aims to provide a custom implementation of the printf function in C. The purpose of ft_printf is to handle various conversion specifiers and format options just like the original printf function, but with some limitations and requirements.

## Features
ft_printf is designed to handle the following conversion specifiers:

```
%c: Prints a single character.
%s: Prints a string (as defined by the common C convention).
%p: Prints a pointer address in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.
```

## Requirements
Here are some key requirements for ft_printf:

The buffer management of the original printf() is not implemented.
The function will be compared against the original printf().
The command ar must be used to create the library (libftprintf.a), and the library must be created at the root of the repository.
The use of the libtool command is forbidden.

## Getting Started

To use Libft in your project, follow these steps:

1. Clone the repository:

```bash
https://github.com/francfer-art/42Printf.git
```

3. Include the library in your project:

```c
    #include "ft_printf.h"
```

4. Compile the library:

```bash
    make
```

5. Link the library during compilation of your project:

```bash
    gcc main.c -L. -lftprintf -o my_program
```

## Usage

Once the library is successfully integrated into your project, you can start using the functions in your code. Refer to the Libft Wiki for detailed documentation on each function.

```c
#include "ft_printf.h"

int main()
{
    int num;
    num = 7;

    ft_printf("Hello, %s\n", "world!");
    ft_printf("The value of the number is: %d\n", num);
    return 0;
}

```

## Contributing

Contributions are welcome! If you have improvements or additional features to suggest, please open an issue or submit a pull request. Follow the Contribution Guidelines for more details.

## License
This project is licensed under the MIT License - see the LICENSE file for details.

<div style="background-image: url('https://cdn.intra.42.fr/coalition/cover/275/Banners_4500x400-V2_Banner_Void__3_.png'); background-size: cover; background-position: center; width: 300px; height: 200px; border-radius: 10px; box-shadow: 0 0 10px rgba(0, 0, 0, 0.2); padding: 20px; color: white; font-family: Arial, sans-serif; text-align: center; display: flex; flex-direction: column; justify-content: center; align-items: center;">
    <img src="https://cdn.intra.42.fr/users/fe45afe8506f26e1d20c74c6443f9386/francfer.jpg" alt="Profile Picture" style="width: 80px; height: 80px; border-radius: 50%; margin-bottom: 10px;">
    <h1>francfer</h1>
    <p>Visual Designer</p>
</div>


