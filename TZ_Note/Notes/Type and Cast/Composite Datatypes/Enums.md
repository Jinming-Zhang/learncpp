# Enum
A `Enum` is a compound data type where **every possible value** is defined as a symbolic constant.

Enumerated types are best used when you have a smallish set of related constants, and objects only need to hold one of those values at a time.
# Unscoped Enum
Unscoped enum put their enumerators (values) into the same scope as the definition of the enum.
This increses the chance of causing name collisions.

```cpp
enum Color
{
    red,
    green,
    blue, // blue is put into the global namespace
};

enum Feeling
{
    happy,
    tired,
    blue, // error: naming collision with the above blue
};

int main()
{
    Color apple { red }; // my apple is red
    Feeling me { happy }; // I'm happy right now (even though my program doesn't compile)

    return 0;
}
```

# Scoped Enum
