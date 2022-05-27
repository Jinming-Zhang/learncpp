# Scope resolution operator

[[Operators and bit manipulation#scope resolution operator | See Scope Resolution Operator]]

# Variable scope and variable shadowing
### Local Variable / automatic variable:
- Variables defined inside a block.
- They have `block scope`
- They are created at the point of definition and destryoed at the end of its block.
- Local variable does not have [[Namespaces and scope#Linkage|linkage]]
### Global variable
- Variables declared outside of a function or block
- They can be accessed from the entire file.
- They have flie scope and static duration (**destroyed when program ends**)
## Variable shadowing
Variable showdowing happens when a local scope variable has the same name as a outer scope variable.
In such cases, references of the name in the block where the local scop variable is defined will be referencing the local variable, and the outter scope variable will not be changed.
There is no way to directly access the shadowed varible in outer block.

# Linkage
