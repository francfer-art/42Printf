![Banner](https://raw.githubusercontent.com/francfer-art/Badges/main/covers/cover-ft_printf.png?token=GHSAT0AAAAAACI7BVOLIZV6FD4DJI326UIGZOIZYIQ)

<p align="center">
  <img src="https://raw.githubusercontent.com/francfer-art/Badges/main/badges/ft_printfe.png?token=GHSAT0AAAAAACI7BVOK54CECJBVIAYQRFY4ZOIZWGQ" alt="Libft Logo">
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Score-100%2F100-brightgreen" alt="Libft Score">
</p>

## Introduction

Welcome to ft_printf! This project aims to provide a custom implementation of the printf function in C. The purpose of ft_printf is to handle various conversion specifiers and format options just like the original printf function, but with some limitations and requirements.

## Overview
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
