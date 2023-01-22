# return-to-libc
Ret2Libc attack example in C.

The exploit code in this example utilizes stack pivoting and common 'ret2libc' attack vectors in order to get the 
program to exit. This exploit is overwriting the return address of the vulnerable function in the target process with the address of the `system()`
function in the libc library. 

Then the program is overwriting the next address after the return address with the address of the `exit()` function in the libc library and the next address after that is overwritten with the address of the `string_ptr` variable. So when the `system()` function is called, it will interpret the address stored in the next address after the return address as the command to be executed, which in this case is the address of the `exit()` function, and it will execute it, which will cause the target process to exit.
