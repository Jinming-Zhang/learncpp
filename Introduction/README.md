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
# Introduction to iostream