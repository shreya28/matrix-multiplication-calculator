# Matrix Multiplication Calculator

A browser-based matrix multiplication tool, rebuilt from my original C console program. The web version uses plain HTML, CSS and JavaScript, with no frameworks or dependencies.

The project has two versions of the same program:

- `matrix_multiplication.c`: the original command-line version in C, using dynamic memory allocation (`malloc` / `free`)
- `index.html`: the web version, with an interactive interface

## Features

- Choose the size of both matrices (1 to 8 rows and columns)
- Checks that columns of A equal rows of B before multiplying
- Editable grids for entering values
- Click any result cell to see its step-by-step calculation
- Random fill and clear buttons
- Responsive layout, dark mode, keyboard and screen reader support

## How to run

**Web version:** open `index.html` in any browser. No install or build step is needed.

**C version:**

```
gcc matrix_multiplication.c -o matrix_multiplication
./matrix_multiplication
```

## How it works

For an `r1 x c1` matrix A and an `r2 x c2` matrix B, multiplication is possible only when `c1 == r2`. The result is an `r1 x c2` matrix where:

```
result[i][j] = sum of a[i][k] * b[k][j]  for k = 0 .. c1 - 1
```

## Project structure

```
matrix-multiplication-calculator/
  index.html                (web version: page, styles and script in one file)
  matrix_multiplication.c   (original C version)
  README.md
```

## Possible improvements

- Move the multiply logic into a separate function and add unit tests
- CSV import and export
- Transpose, determinant and inverse
