To run: make qemu

# Changes

### strace 
* Define sys_trace in syscall.c, add to array of functions
* Add attributes trace_mask, intime, trtime, endtime, etc. to proc struct
* Declare sys_trace using trace, which is defined in proc.c
* Edit perl file to include added command
* Added strace to makefile user programs section

### sigalarm & sigreturn
* Define sys_sigalarm, sys_sigreturn in syscall.c, add to array of functions
* Add attributes alarm_interval, alarm_ticks, trapframe, alarm_goingoff, etc. to proc struct
* Declare sys_sigalarm, sys_sigreturn in sysproc.c using sigalarm, sigreturn functions which are defined in trap.c
* Edit perl file to include added commands
* Added alarmtest.c file (provided sample code) to verify results, can be run after make qemu is run

### Scheduler

* Macro defined on Makefile:74
* Change SCHEDULER:={RR/FCFS/LBS/PBS/MLFQ} to switch between different scheduling algorithms
* Ex: make qemu SCHEDULER=FCFS
* Added ctime, tickets to struct proc
* Assigning ctime, tickets in allocproc func in proc.c
* Added if_else statements in scheduler func in proc.c

* Changed yield() in usertrap, kerneltrap in trap.c to disable pre-emption for FCFS
* Added copying parent's tickets in fork() in proc.c
* Added random_proc and do_random_proc to defs.h

* Do i need to change SCHEDULER from number to macro #ifdef statements?
* Need to do settickets
* Changed procdump for debugging: Added ctime to printf. (Need to remove)
