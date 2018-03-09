fortune-ha:
	g++ --std=c++14 -O3 -o fortune-ha fortune-ha.cpp

install:
	sudo cp fortune-ha /usr/local/bin

uninstall:
	sudo rm /usr/local/bin/fortune-ha
clean:
	rm fortune-ha
