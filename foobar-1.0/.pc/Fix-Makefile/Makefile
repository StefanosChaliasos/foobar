prefix = /usr/local

all:
	$(CC) -o foo file1.c
	$(CC) -o bar file2.c

install:
	install foo $(DESTDIR)$(prefix)/bin
	install bar $(DESTDIR)$(prefix)/bin
	install foobar.1 $(DESTDIR)$(prefix)/share/man/man1

clean:
	rm -f foo bar
