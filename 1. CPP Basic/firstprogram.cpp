// The '#include<bits/stdc++.h>' is a preprocessor directive that includes all standard C++ libraries.
// It is a GCC-specific header file that is commonly used in competitive programming to include 
// most of the standard C++ headers at once. It is not recommended for production code because it 
// may increase compilation time and memory usage. It’s better to include only the required libraries 
// such as <iostream>, <vector>, <algorithm>, etc. in real-world applications.

#include<bits/stdc++.h>

// The 'using namespace std;' line allows us to use standard C++ library names like 'cout', 'cin', 
// 'endl', etc., without needing to prefix them with 'std::'. While this is fine in simple programs, 
// in larger projects, it is usually avoided because it can lead to name conflicts, especially if 
// different libraries have functions or classes with the same names.

using namespace std;

int main() {
    // 'main()' is the entry point of every C++ program. When the program is executed, the execution 
    // starts from the 'main' function. It returns an integer value, usually '0', to indicate that the 
    // program has executed successfully.

    // 'cout' is the standard output stream object in C++. We use it to print messages to the console.
    // '<<' is the insertion operator, which directs the data to the output stream.
    // 'endl' is used to insert a newline character (like '\n') and flush the output buffer.
    cout << "Hello Everyone, welcome to Cpp Programming" << endl;

    // 'return 0;' indicates that the program has ended successfully. Returning any non-zero value 
    // usually indicates some sort of error or abnormal termination.
    return 0;
}

// **C++ Coding Standards to Follow:**
// 1. **Use meaningful names**: Use meaningful names for variables, functions, and classes to make 
//    the code more readable and maintainable. Avoid abbreviations.
// 2. **Use appropriate libraries**: Instead of using <bits/stdc++.h>, include only the required 
//    libraries like <iostream> for input/output or <vector> for dynamic arrays.
// 3. **Avoid using 'using namespace std;' in headers**: While it’s convenient, it can cause name 
//    collisions, so it's better to avoid it in headers or in large projects.
// 4. **Commenting**: Properly comment your code to explain non-obvious logic or important sections.
// 5. **Code formatting**: Follow a consistent code style (indentation, spaces, etc.) to make the 
//    code easier to read. Indent your code blocks and use spaces between operators and variables.
