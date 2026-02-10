***This project has been created as part of the 42 curriculum by jdiaz-ec***
# ft_printf
---
## DESCRIPTION
### printf() is a popular and maybe the most useful functions in C language.
### The goal of this project is:
- #### Learn about variadic funcions in C. A variadic function is a function that accepts a variable number of arguments. ft_printf() writes output to stdout, the standard output stream.

### My ft_printf() accepts the following specifiers:
- #### %c : prints a character.
- #### %s : prints a string.
- #### %d : prints a signed integer.
- #### %i : prints a signed integer.
- #### %u : prints an unsigned integer in decimal notation.
- #### %x : prints an unsigned integer in hexadecimal notation.
- #### %X : prints an unsigned integer in hexadecimal notation with capital letters.
- #### %% : prints a '%'.

## INSTRUCTIONS
### To compile the program:
```bash
make
```
This will generate libftprintf.a, which can then be used to compile any other .c file containing a main function.

### Additional rules:
```bash
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Recompile everything
```

## RESOURCES

#### Reading the f****** manual was the first of the used resources to understand, learn and study how this function works, as well as its limitations and bugs.
#### When reading the manual wasn't enough or when I needed more information regarding printf(), the 42 peer-to-peer method was a huge helpful resource; the willingness of 42 students to help and support one another is truly amazing.
#### Some other helpful resources were: stackoverflow.com, youtube.com, geekforgeeks.org