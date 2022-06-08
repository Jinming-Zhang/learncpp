
inline in cpp means multiple definitions are allowed.
# Inline Function
# Inline Variable
A variable identifier has multiple definitions across different files, the linker will consolidate all inline definitions of that variable into a single variable definition in a .cpp file somewhere, and all the definitions will refer to that consolidated definition.
### Restrictions
- All definitions of the inline variable must be identical, or undefined behaviour will occur.
- The inline variable **definition** (not forward declaration) must be present in any file that uses the variable.