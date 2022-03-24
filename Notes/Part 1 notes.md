# C++ Introduction
## 1. The Basics of C++
C++ is a compiled language. For a program to run, it's source text has to be processed by a compiler, producing object files, which are combined by a linker yielding an executeable program.

While the executeable itself is not transferable between OS such as Windows to Mac, the source code itself can be compiled to run in many systems.

The ISO C++ standard defines two kinds of entities:
- `Core language features`, such as built-in types (`char` and `int`) and loops (`for`-statements and `while`-statements)
- `Standard-library components`, such as containers (`vector` and `map`) and I/O operations (`<<` and `getline()`)

C++ is a statically typed language. Meaning that every entity (e.g., `object`, `value`, `name`, and `expression`) must be known before it's use and the type of an object determines the set of operations applicable to it.

### 1.1. Types, Variables, Arithmetic

A declaration is a statement that introduces a name into the program. It specifies a type for the named entity
- A type defines a set of possible values and a set of operations (for an object).
- An object is some memory that holds a value of some type.
- A value is a set of bits interpreted according to a type.
- A variable is a named object.

