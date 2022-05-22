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

# Bit Manipulations
<table>
<tr>
<td>Operator</td>
<td>Symbol</td>
<td>Form</td>
<td>Operation</td>
</tr>
<td>left shift</td>
<td> &lt&lt </td>
<td>  x &lt&lt y </td>
<td>all bits in x shifted left by y bits</td>
</tr>
<td>right shift</td>
<td>&gt&gt </td>
<td>x &gt&gt y</td>
<td>all bits in x shifted right by y bits</td>
</tr>
<td>bitwise NOT</td>
<td>~</td>
<td>~x</td>
<td>all bits in x flipped</td>
</tr>
<td>bitwise AND</td>
<td>&</td>
<td>x & y</td>
<td>each bit in x AND each bit in y</td>
</tr>
<td>bitwise OR</td>
<td>|</td>
<td>x | y</td>
<td>each bit in x OR each bit in y</td>
</tr>
<td>bitwise XOR</td>
<td>^</td>
<td>x ^y</td>
<td>each bit in x XOR each bit in y</td>
</tr>
</table>

New bits that shifted in will have value 0, bits that shifted out are lost forever.
>0011 << 3  result in 1000
>1100 >> 3  result in 0001
