# C++ STL (Standard Template Library)

>This note is based on a Youtube video which has a very good explanation of STL. You can watch it [here](https://youtu.be/BKBXM7ypQG0)

---

STL is basically a set of tools available in C++ programming pattern that can make you code more **quickly**, **efficiently**, and in a **generic way**

---

## Generic Programming

- Data types are not specified in **implementation**, but rather in its **usage**.
- Compile-time polymorphism

For example, if I were to make an algorithm to calculate an area of a rectangle, the code would be like this:

```C++
int area(int a, int b){
    return a * b;
}
```

The problem of that code is if I were to use the same function to calculate another rectangle with a different data types(e.g. `float`, `double`) the code would not work. So instead of making a different conditions for different types of data, it would be faster and efficient to use `template`. For example:

```C++
template <typename T>
T area(T a, T b){
    T result = a * b;
    return result;
}
```

With this code, we can anticipate the use of another data types in the future without the need to change the code. For example:

```C++
int     x = area<int>(5,10)                 //This would return x<int> = 50
double  y = area<double>(5.5,10.1)          //This would return y<double> = 55.55
```

> You can experiment with codes I wrote [here](https://github.com/alfikhlas/CPP-Learning/tree/main/Codes/STL_Template_Example.cpp)

---

## Components of STL

There are four components of STL :

- ***Containers*** which is an *array like data structures*

- ***Iterators*** which is a *pointer like objects that allow traversal of containers*

- ***Algorithms*** which is a *set of functions that are implemented in an efficient way (a few example would be `search`, `sort`, `modify`, `count`, etc)*

- ***Functors (Function Objects)*** which is a *classes which override/overload paranthesis operator `()` such that they can be used as functions that maintain state and can be parameterized*
