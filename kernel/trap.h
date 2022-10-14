int sigreturn();
int sigalarm(int ticks, void(*handler)());
int
devintr();
void
clockintr();
void 
kerneltrap();
void
usertrapret(void);
void
usertrap(void);
void
trapinithart(void);
void
trapinit(void);

