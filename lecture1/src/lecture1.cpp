/** // Doxygen thing up here to save .cpp file
 * @file lecture1.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-09-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream> // need to include iostream to be able to use std::cout
/** // Doxygen key to document code
 * @brief This is a MAIN function
 * 
 * @return int 0 means code exited properly
 */

int main() // function main() must be defined in every c++ program, must be int (not void), can only have one
    // main expects to return an integer, 0 means everything worked fine, only function where we can omit "return 0" and it'll be added automatically
{ 
    std::cout << "Hello worlds\n"; // std::cout << used to print message to terminal
    return 0;                      // this isn't necessary only with main function

    /* Tips
    ctrl + / comments and uncomments lines
    ; indicates termination of a statement
    */

    /* How to run code
     to run code with cmake, first set build target in command search bar, then write the file name (i.e. lecture1), then click on cmake icon on side,
     then hover on configure and press the lil button on side, then do same with build, then go back to file (ex. lecture1) and hit run button below
     ^^ to do this you need cmakelists.txt and cmakepresets.json
     */

    /* Build Process
     Preprocessor - process directives and generate modified source code that is then passed to the compiler (removes comments, deals with preprocessor directives (start with #))
     Compiler - generates object code (assembly code)
     Linker - produces executable by resolving dependencies between diff. parts of program, memory, external libraries
     */
}