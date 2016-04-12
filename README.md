# Final Countdown
A program that runs forever logging the date time stamp to a file.

This software is to be used to measure battery charge time on a Raspberry Pi.

The basic idea is to have two files and alternate between each one every loop. This means that if the Pi dies halfway through a write you still have the write to the previous file closed. The file is is overwritten every time a new time is entered, this is because the only needed time is the latest and the start time is saved along with the filename.

Even through this software has been made to run on the Raspberry Pi it should be cross platform.

If you are running the Pi headless it is worth installing 'tmux' or 'screen' or a similar alternative.
Please see [this thread](http://askubuntu.com/questions/8653/how-to-keep-processes-running-after-ending-ssh-session).

#Compilation and execution
To compile:
`gcc main.cpp -o final_countdown`
To run:
`./final_countdown`
