
all: main.c
	gcc -Ofast -Wall main.c -o hashuniq

clean:
	$(RM) hashuniq
