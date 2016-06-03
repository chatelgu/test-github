all: helloworld

clean:
	rm helloworld *~

helloworld: main.c
	gcc -o helloworld main.c

