# Operators
## Operator precedence
All operators in c++ are assigned a level of precedence, in a compound expression (expression with multiple operators), operator with highest precedence are evaluated first.
> 1 is the highest precedence.

Adjacent operators with same precedence will be evaluated based on their associativity (left-> right or right->left).

> level 5 operators associativity of from left to right.

Value of operands can be evaluated at any order, so do not make expression depends on when the operands will be evaluated.
```cpp
int getvalue()
{
	int v{};
	std::cin<<v;
	return v;
}
// this may give unexpected result because the compiler can getvalue in any order
// the order player enters doesn't match the order in expression
std::cout<<getvalue() + (getvalue() - getvalue())<<std::endl;
```
