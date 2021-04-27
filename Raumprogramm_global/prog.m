all:Raumprogramm.o stepcounter.o answer.o prog
prog.o:Raumprogramm.c
  cc -c Raumprogramm.c
stepcounter.o:stepcounter.c
  cc -c stepcounter.c
answer.o:answer.c
  cc -c answer.c
prog:Raumprogramm.o stepcounter.o answer.o
  cc -o prog Raumprogramm.o stepcounter.o answer.o
