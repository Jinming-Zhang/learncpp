# Good Commenting
- at the library, program, or function level, use comments to describe what.
- inside the library, program, or function, use comments to describe how.
- at the statement level, use comments to describe why.
# variable declaration and initialization
## Initialization
- default initialization
	- only declare a variable without assign a value.
	- in most cases, this will leaves a varialbe with indeterminate value (whatever it's in the memory)

		```cpp
		int a;

- Copy Initialization
	- An initializer is provided after the equal sign.

		```cpp
		int a = 5;
		```	```
- Direct Initialization
	- An initializer is provided inside parenthesis.

		```cpp
		int a = (5);
		```	```
- Brace/Uniform/List Initialization
	- An consistent way of initializing (list) variables.
	- Brace initialization also disallows "narrowing" conversion and will generate compiler warning/error in such cases.
	- Direct brace initialization

		```cpp
		int a {5};
		```	```
	- Copy brace initialization

		```cpp
		int a = {5};
		```	```
	- Value brace initialization (Most cases will initialize the variable to 0/empty)

		```cpp
		int a {};
		```	```
	- Disallowing narrow conversion

		```cpp
		// This will cause compiler warning/error.
		// Since 4.5 is a float, if it assigned to variable a, the factional part will be lost during the conversion.
		int a {4.5};
		```	```
# Uninitialized Variable...
- Initialization = The object is given a known value at the point of definition.
- Assignment = The object is given a known value beyond the point of definition.
- Uninitialized = The object has not been given a known value yet.

# White space
Quoted text separated by nothing but whitespace (spaces, tabs, or newlines) will be concatenated
```cpp
std::cout << "hello "
     "world!"; // prints "hello world!"
```
# Literals and operators
literals are values that have been directly inserted into the source code (hard coded values).
```cpp
std::cout << "hello world!"; // "hello world!" is a literal.
int x{ 5 }; // 5 is a literal.
```
the value of a literal is fixed and can not be changed.
# Expressions
- An expression is a combination of literals, variables, oerators and function calls that can be executed to produce **a single value**.
- The process of executing an expression is called **evaluation**.
- Statement Vs Expression: Statements are used when we want the program to perform an action. Expressions are used when we want the program to calculate a value.
# Local Scope
- Local varialbes are destroyed in the opposite order (thing about call stack) of creation when their local scope body ends (at the end of the curly braces in which it's defined).
# Forward Declarations and Definitions
## One Definition Rule
1. Within a given file, a function, variable, type, or template can only have one definition.
2. Within a given program, a variable or normal function can only have one definition. This distinction is made because programs can have more than one file.
3. Types, templates, inline functions, and inline variables are allowed to have identical definitions in different files.