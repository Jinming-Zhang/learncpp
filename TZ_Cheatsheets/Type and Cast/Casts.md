# C-style cast
```cpp
    double d { (double)x / y }; // convert x to a double so we get floating point division
	double d { double(x) / y }; // convert x to a double so we get floating point division
```
`c-style cast` is context dependent and  can be performed as one of `static cast`, `const cast` or `reinterpret cast`. 
It can be misused unintensionaly, avoid using `c-style cast`.

# Static Cast

# Const Cast
# Dynamic Cast
# Reinterpret Cast