Programming problem:
You are developing an algorithm for dispensing stamps for a postage
stamp vending machine.
Write a function that will return the minimum number of stamps for a
given value. Assume that there will always be a one cent stamp in the
machine.
The function prototype looks like:
int min_number_of_stamps (
const int* array, /* input array of sorted stamp values */
size_t array_size, /* number of elements in array */
int request /* desired value to of stamps */
);
The function will return the minimum number of stamps for a given
value.
As an example, if the array was [90,30,24,15,12,10,5,3,2,1] and the
request was "32", the output should be "2", one 30 cent stamp and one 2
cent stamp.
Things to keep in mind:
1. Assume that a junior programmer is going to read your code. You
should include comments and any other aides that you use to
communicate your code to other developers.
2. Optimize code for speed.
3. The code should compile and work. Please send it as an attached
text file.
4. The code should work for countries with high denomination values
where stamp values of 1000 or 9000 are common.
5. Although you are free to use any compiler, the target compiler is
Microsoft Visual Studio 2008.

