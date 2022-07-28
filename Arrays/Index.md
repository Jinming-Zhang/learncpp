# Fixed Array
Array of fixed length, the length of the array in initialization must be a **compile-time** constant.

Valid:
```cpp
// using a literal constant
int numberOfLessonsPerDay[7]{}; // Ok

// using a constexpr symbolic constant
constexpr int daysPerWeek{ 7 };
int numberOfLessonsPerDay[daysPerWeek]{}; // Ok


```

Not valid:
```cpp
const int daysPerWeek{ temp }; // the value of daysPerWeek isn't known until runtime, so this is a runtime constant, not a compile-time constant!
int numberOfLessonsPerDay[daysPerWeek]{}; // Not ok
```

### Fixed Array Initialization
use  initializer list to initialize a fixed array:
```cpp
int prime[5]{ 2, 3, 5, 7, 11 }; // use initializer list to initialize the fixed array
```
If there are few initializers in the array than the size, the remaining elements will be **zero-initialized**, for non-integral fundamental type will be whatever the value 0 converted to.