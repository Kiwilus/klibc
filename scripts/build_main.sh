gcc tests/main.c -Iinclude -Lbuild -lklib -o build/myprogram
LD_LIBRARY_PATH=build ./build/myprogram
