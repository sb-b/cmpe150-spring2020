
# Week 10 Notes - 06.05.2020
---

## A Brief Summary of Arrays (Continued)
<details>

<summary> Using Arrays with Functions </summary>

<br>

* An array is a group of memory locations.


### Example: 

* We want to create an array named digit of size 10 and type as int.

```c 
#include <stdio.h>

int main()
{
     int digit[10];
     
   return 0;
}
```

* The above code allocates memory space for 10 integer data values:

<img src="figures/array_fig1.png" width="150">



</details>

<details>

<summary> Multidimensional Arrays </summary>

<br>
</details>

## Questions

### Question 1 - Pairs (A modified 7th question from previous lab)

Write a program which reads an integer N and an integer X from the user, then reads N integers from the user to an array. Then find all pairs in the array whose sum is equal to X. To achieve this, write a boolean function named *isSumEqual* that takes three integers N, M, and X as arguments and returns *True* if the sum of N and M is equal to X, otherwise returns *False*. 

* A number can not be a pair with itself. Pairs should consist of different numbers.
* You can print either (3,4) or (4,3) for one pair.
* You should print all the pairs even if they are same.

|  INPUT  |  OUTPUT |
|-------|-------|
| 7 7<br>2 4 3 5 7 8 9 | (2, 5)<br>(4, 3) |
| 10 7<br>2 4 3 5 6 -2 4 7 8 9 | (2, 5)<br>(4, 3)<br>(3, 4)<br>(-2, 9) |


<br>

### Question 2 - fix34 (A modified version of the 8th question from previous lab)

Write a program which reads an integer N from the user, then reads N integers from the user to an array. Then rearrange the array so that every 3 is immeddiately followed by a 4. Do not move the 3's, but every other number may move. The array contains the same number of 3's and 4's, every 3 has number after it that is not a 3, and a 3 appears in the array before any 4. 

For this purpose, write a function called *swap* that takes an integer array, an integer that denotes the size of the array, and two integers k and l as arguments. The function is supposed to swap the k'th and l'th elements in the array.

|  INPUT  |  OUTPUT |
|-------|-------|
| 4<br>1 3 1 4 | 1 3 4 1 |
| 7<br>1 3 1 4 4 3 1 | 1 3 4 1 1 3 4 |
| 4<br>3 2 2 4 | 3 4 2 2 |

<br>

### Question 3 - Bubble Sort (A modified version of the 9th question from previous lab)

Write a program which reads an integer N from the user, then reads N integers from the user to an array. Then sort elements of the array in ascending order. *You may want to use the same swap function in the previous question.* 

|  INPUT  |  OUTPUT |
|-------|-------|
| 8<br>4 2 8 6 7 3 1 5 | 1 2 3 4 5 6 7 8 |


Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

Example:

First Pass:
* ( **5** **1** 4 2 8 ) –> ( **1** **5** 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
* ( 1 **5** **4** 2 8 ) –> ( 1 **4** **5** 2 8 ), Swap since 5 > 4
* ( 1 4 **5** **2** 8 ) –> ( 1 4 **2** **5** 8 ), Swap since 5 > 2
* ( 1 4 2 **5** **8** ) –> ( 1 4 2 **5** **8** ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.

Second Pass:
* ( **1** **4** 2 5 8 ) –> ( **1** **4** 2 5 8 )
* ( 1 **4** **2** 5 8 ) –> ( 1 **2** **4** 5 8 ), Swap since 4 > 2
* ( 1 2 **4** **5** 8 ) –> ( 1 2 **4** **5** 8 )
* ( 1 2 4 **5** **8** ) –> ( 1 2 4 **5** **8** )

Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

Third Pass:
* ( **1** **2** 4 5 8 ) –> ( **1** **2** 4 5 8 )
* ( 1 **2** **4** 5 8 ) –> ( 1 **2** **4** 5 8 )
* ( 1 2 **4** **5** 8 ) –> ( 1 2 **4** **5** 8 )
* ( 1 2 4 **5** **8** ) –> ( 1 2 4 **5** **8** )

