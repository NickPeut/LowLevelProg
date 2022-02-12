prog.exe : main.o repeat_func.o
	gcc -o prog main.o repeat_func.o

main.o : main.c
	gcc -std=c11 -pedantic -Wall -Wextra -c -o main.o main.c

repeat_func.o : repeat_func.c
	gcc -std=c11 -pedantic -Wall -Wextra -c -o repeat_func.o repeat_func.c