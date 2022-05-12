# Increment/Decrement Operator
<table>
<tr>
<td >Form</td>
<td>Operation</td>
</tr>
<tr>
<td>++x</td>
<td>increment x, then return x</td>
</tr>
<tr>
<td>--x</td>
<td>decrement x, then return x</td>
</tr>
<tr>
<td>x++</td>
<td>copy x, increment x, then return the copy</td>
</tr>
<tr>
<td>x--</td>
<td>copy x, decrement x, then return the copy</td>
</tr>
</table>

> Prefer prefix version, e.g ++x.
> It's more performant

# Conditional Operator ?:
It has a very low precedence (rank 16/17), it will be error prone if we use it to do anything other than assigning the result to a varialbe.
```cpp
std::cout<< x>y?1:0 <<std::endl;
```
will be equivalent to
```cpp
(std::cout<< x>y) ?1:0<<std::endl;
```
which prints x>y, and discards both 1 and 0.

> Conditional Initialization
> ```cpp
> 	// if-else can not do
> constexp bool full{false}
>constexp maxStudent {full?10:20};
>```