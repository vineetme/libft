# libft
_This project has been created as part of the 42 curriculum by vmeharia._

**DESCRIPTION**

Code a C functions library from scratch.
The functions are in 3 buckets
  - libc fubctions: reimplement a set of 23 functions from libc (with their prototypes and behaviour exactly as defined in man page)
  
  - Additional functions: develop 11 functions that are not in libc / behave a little differently from the standard function
  
  - Linked list: The above functions are for string and memory manipulation. This set of 9 functions is for list manipulation.

**INSTRUCTIONS**

   **Standards and Rules**
  
      The Norm: Code must strictly comply with the Norm; any norm error (even in bonus files) will result in a grade of 0.  

      No Global Variables: Declaring global variables is strictly forbidden.  

      Function Scope: Helper functions must be defined as static to restrict their scope to the appropriate file.  

      Naming Convention: All recreated standard functions must be prefixed with ft_ (e.g., strlen becomes ft_strlen).  

      Forbidden Keywords: Cannot use "restrict" keyword in prototypes or compile with the -std=c99 flag.

    **Memory Management & Stability **
    
      No Crashes: Functions must not quit unexpectedly due to segmentation faults, bus errors, or double frees (except for undefined behavior). If this occurs, the project receives a 0. 
  
      No Leaks: All heap-allocated memory must be properly freed; memory leaks will not be tolerated.

    **Compilation & Library Creation**
  
      Compiler and Flags: Every .c file must be compiled using cc with the strict flags -Wall, -Wextra, and -Werror.
  
      Makefile Rules: Makefile must at least contain the rules $(NAME), all, clean, fclean, and re.  

      No Relinking: Makefile must not perform any relinking.  

      Archive Creation: Must use the ar command to create the library (libft.a); using libtool is forbidden.  

    **Submission Structure**
  
      File Location: All project files, including libft.a, must be placed at the root of your Git repository.  
    
      Unused Files: Submitting unused files is not allowed.  
  
      README Requirements: You must provide a README.md at the root of your repository containing specific italicized introductory text, a description, setup instructions, a resources section (detailing AI usage), and a detailed description of the library. 

**RESOURCES**
