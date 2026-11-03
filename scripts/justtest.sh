# library first
echo "building the library..."
cmake -S . -B build
cmake --build build
echo "success building library"

# then test file
echo "building the test file..."
cmake -S tests -B tests/build
cmake --build tests/build
echo "success building testfile"
echo "executing testfile with ./tests/build/main"

./tests/build/klib_test
