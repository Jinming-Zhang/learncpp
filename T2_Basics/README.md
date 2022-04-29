
# Basics

## Data type categories

- Floating Point
- Integral
	- int, bool, char, enum
	- named because they are stored in memory like integers, even though their behaviours may vary
- Null Pointer
- Void
## sizeof operator and 'size_t' type
- returns the number of bytes that a type or an identifier takes in memory
- 'std::size_t' in std namespace is defined as an **unsigned integral** type. It's typically used to represent *size or lengh of objects*
	``` 
	any object with a size larger than the largest value that **std::size_t** can hold will cause compiler error
	```

## unsigned int and cautions
- add 'unsigned' keyword before integer types
	```cpp
	unsigned short x{0};
	unsigned int y{0};
	unsigned long z{0};
	```
- wrapped behaviour (modulo wrapping) when overflow (only for unsigned int)
	```cpp
	// 2e16 - 1 = 65535 is the largest unsigned short value
	unsigned short x{-1}; // => -1 % 2e16 => x = 65535
	unsigned short y{65537}; // => 65537 % 2e16 => x = 2
	```
- when doing alrithmatic operation with unsigned int and signed int, signed int will be **casted** to unsigned int before the operation.
- pitfalls
  - it's **extremely** easy to make unsigned int overflow when using it doing alrithmatic operations, both with unsigned int and mixing with signed int
## fixed width int, fast int
