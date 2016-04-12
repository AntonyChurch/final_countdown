# Final Countdown
A program that runs forever logging the date time stamp to a file.

This software is to be used to measure battery charge time on a Raspberry Pi.

The basic idea is to have two files and alternate between each one every loop. This means that if the Pi dies halfway through a write you still have the write to the previous file closed.

Even through this software has been made to run on the Raspberry Pi it will be cross platform.

#Compilation and execution
`gcc main.cpp -o final_countdown`
`./final_countdown`
