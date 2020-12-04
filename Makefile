PREFIX ?= /usr/local
CC ?= cc

output: dwmblocks.o
	gcc dwmblocks.o -lX11 -o dwmblocks
dwmblocks.o: dwmblocks.c blocks.h
	gcc -c -lX11 dwmblocks.c 

clean:
	rm -f *.o *.gch dwmblocks
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	install -m 0755 dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
