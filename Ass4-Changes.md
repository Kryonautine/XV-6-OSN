# Changes

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