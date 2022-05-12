>Avoid using variables that has side-effect applied more than once in a statement.
>```cpp
>int x = 5;
>add(x, ++x); 
>```
>indetermined behaviour, because ++x modifies value of x, result will be different depends on the order that the compiler evaluates the parameters.


