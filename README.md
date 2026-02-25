# BSQ - Biggest Square

## Description

BSQ finds the biggest square of free space in a grid. The grid is read from a file where `.` represents empty space and `o` represents an obstacle. The program replaces the area of the biggest square found with `x` characters and prints the result.

## Build

```
make        # compile
make re     # recompile
make clean  # remove .o files
make fclean # remove .o files and binary
```

## Usage

```
./bsq map_file
```

## Example

Input file:
```
5.o
.....
.o...
.....
.....
.o...
```

Output:
```
.....
.o...
.xxx.
.xxx.
.oxx.
```

The program found a 3x3 square and marked it with `x`.

## Return values

- 0 on success
- 84 on error
