# Create the directory structure for build, src, and include files
mkdir -p build src include

# Create the main CMakeLists.txt file
touch CMakeLists.txt

# Create the main entry file inside src
touch src/main.cpp

# Create source files for Array implementation inside src
touch src/Array.cpp include/Array.hpp

# Create source files for LinkedList implementation inside src
touch src/LinkedList.cpp include/LinkedList.hpp

# Create source files for Stack implementation inside src
touch src/Stack.cpp include/Stack.hpp

# Create source files for Queue implementation inside src
touch src/Queue.cpp include/Queue.hpp
