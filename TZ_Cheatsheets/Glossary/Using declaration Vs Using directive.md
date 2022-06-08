# Using Declaration Vs Using Directive
`using declaration` and `using directive` allow us to use unqualified names as alias for qualified names at the scope that the declaration/directive is used.

## Qualified and Unqualified Names
>A qualified name is a name that with associated scope.

Examples:
- std::cout
- ::foo
- classA::method1

>A unqualified name is a name that does not include scope qualifier.

Examples:
- cout
- boo()

## Using Declaration
We need a separate `using declaration` for each name.
```cpp
using std::cout;
cout<<"something";
```

## Using Directive
`using directive` imports all identifiers inside a namespace into the ["same scope"](https://quuxplusone.github.io/blog/2020/12/21/using-directive/) of the `using directive`.

```cpp
using namespace std;
cout<<"something"<<endl;
```

## Summary
Prefer `using declaration` over `using directive` because `using directive` increases the chances for name collision and may alter code behaviour when the code in the namespace updated.