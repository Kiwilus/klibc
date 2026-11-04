# klibc

**klibc** is a small C library containing my own implementations of common functions and utilities.

The main purpose of this project is to improve my understanding of C, memory management, pointers, and low-level programming by recreating existing functionality from scratch.

## Goals

- Improve my C programming skills
- Practice working with pointers and memory

## Compilation and Execution

### Using scripts:

You can use different scripts in the `scripts` folder, depending on what you want to do:

- `scripts/buildlib.sh`: Builds the library.
- `scripts/buildtest.sh`: Builds the test file.
- `scripts/buildall.sh`: Builds both the library and the test file.
- `scripts/justtest.sh`: Builds the library and the test file, then executes the test file.
- `scripts/clean.sh`: Ieletes build and cache directorys.
- `scripts/installlib.sh`: Installs the library on the system(requires sudo).

### Manual:

#### build the library
```bash
cmake -S . -B build
cmake --build build
```

> this will build the library to the `build` build directory.

#### build the testfile
```bash
cmake -S tests -B tests/build
cmake --build tests/build
```

> this will build the testfile, link it with the library(need to build the library first) and store the binary at tests/build.

#### install the library on the system
```bash
# copying header file
sudo mkdir -p /usr/local/include/klib
sudo cp include/klib/math.h /usr/local/include/klib/
# copying library
sudo cp -P build/libklib.so* /usr/local/lib/
# configure the linker cache
sudo ldconfig
```

**Compiling a C file with the library with gcc**

for example wo use klib in a file:

```c
// main.c
#include <klib/math.h>
#include <stdio.h>

int main(void)
{
    printf("10 + 5 with klib: %d\n", klib_add(10, 5));
}
```
Compiling and use the library:

```bash
gcc main.c -o main -lklib
```

and execute with:

```bash
./main
```

## License

This project is licensed under the MIT License.
