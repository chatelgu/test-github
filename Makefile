all: helloworld

clean:
	rm -f helloworld *~ */*~

helloworld: src/main.c
	gcc -o helloworld src/main.c

