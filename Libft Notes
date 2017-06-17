# Static Functions in C

By default, declared functions are implicitly **extern** (public) and visible outside of declaration.  Static functions are visible only within the declaration, local scope. Static functions cannot be called outside of declaration.

# Typecasting

Making a variable of one type another type for one single operation.
Typecast before division to retain float value, `1.4`.
Typecasting a lower data type to higher data type will avoid data loss, but vice versa will truncated.

```c
#include <stdio.h>
int main ()
{
    float x;
    x = (float) 7/5;
    printf("%f",x);
}
```

## Typecasting Pointers

A pointer, points to an address in memory, with a label indicating the type of the value.  The address indicates where to look and the type indicates what to take.  The address of the pointer is usually the address to the first byte in block of memory. Casting a pointer changes the label but not the address.  

-+----+----+----+----+----+----+-
 |    | c  |    |    |    |    |
-+----+----+----+----+----+----+-
       ^~~~
       | char
       d

-+----+----+----+----+----+----+-
 |    | c  | ?₁ | ?₂ | ?₃ |    |
-+----+----+----+----+----+----+-
	  ^~~~~~~~~~~~~~~~~~~~
	  | int
	  (int*)d

-+----+----+----+----+----+----+-
 |    |         x         |    |
-+----+----+----+----+----+----+-
      ^~~~~~~~~~~~~~~~~~~~
      | int
	  p


# Memory Functions

Functions used to process non-string data, i.e. array of floats , array of pointers etc..
Functions do not check for terminating null character, always processes `n` bytes.
To avoid overflows, the size of the arrays pointed to by both the destination and source parameters, shall be at least num bytes.
When memory is allocated, the value of the bytes is unknown.

# Heap vs Stack Memory

Stack is implicit allocation of memory in function call. Memory is created when function is called and destroyed upon exit.
Heap is explicit allocation of memory.  Allocation and deallocation must be taken care of by the programmer.
Memory allocated on the stack will deallocated once scope is exited, while memory on heap will remain.

# Memory Leak

Occurs when programs creates memory in the heap, but forgets to free it.

**Simple Rules to Avoid Leak**

1. Always write `free` just after `malloc`
```c
int *p = (int*) malloc ( sizeof(int) * n );

// ... do stuff

free(p);
```

2. Never work with allocated pointer, used a copy. Prevent accidentally changes to pointer and returning wrong address.
```c
int *p_allocated = (int*) malloc ( sizeof(int) * n );
int *p_copy = p_allocated;
// do your stuff with p_copy, not with p_allocated!
// e.g.:
while (n--) { \*p_copy++ = n; }
...
free (p_allocated);
```

3. Use more memory.  Allocate more memory than need to ensure everything works, then go back and cut down.

4. Store array length inside array. Allocate an array sized n+1 and save b to 0 index.
```c
int *p_allocated = (int*) malloc ( sizeof(int) * (n+1) );
int *p_copy = p_allocated+1;
p_copy[-1] = n;
// do your stuff with p_copy, not with p_allocated!
free (p_allocated);
```

# Memory Allocation for Manipulation

To create a string that can be edited, it must be created on the stack in the form of a character array. Use character array notation for strings only when it is intended to be edited.

```c
/* Allocated on the stack and is capable of read / write. */
char myStr[] =  "Adam likes dogs.";

/* Allocated on read-only segment*/
char *name = "Rick";

```

# Const Qualifier

Applying the `const` qualifier to the declaration of any variable will indicate it will not change. `const` qualifier applies to the left then right.

Always use const for function parameters passed by reference where the function does not modify (or free) the data pointed to.


```c
// Pointer to constant
const int * ptr; // Declares a pointer whose contents cannot be changed.
int const * ptr; // Equivalent to above declaration.
				 // Can change pointer to point to any other int variable, but not value.

// Constant pointer to variable
int * const ptr; // Declares a pointer that cannot be changed to point to another variable, but we can change pointed value.
```

# Testing Script

ctypes
c unit  tests

# Bus error

# Segment Faults

# Debugging

printf
macro

# Makefiles
