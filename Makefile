all:
	g++ main.cc -o jot

install:
	cp jot /usr/local/bin/jot

clean:
	rm jot
