prefix =/usr/local
exec_prefix =${prefix}
libdir =${exec_prefix}/lib
sharedlibdir =${libdir}
includedir =${prefix}/include

all:
	$(CC) -o foo file1.c
	$(CC) -o bar file2.c
	$(CC) -o foo_buz -DFOO buz.c
	$(CC) -o bar_buz -DBAR buz.c
	$(CC) -fPIC -shared -o libfoobar.so src/libfile1.c src/libfile2.c

install:
	install foo $(DESTDIR)$(prefix)/bin
	install bar $(DESTDIR)$(prefix)/bin
	install foo_buz $(DESTDIR)$(prefix)/bin
	install bar_buz $(DESTDIR)$(prefix)/bin
	install foo.1 $(DESTDIR)$(prefix)/share/man/man1
	install bar.1 $(DESTDIR)$(prefix)/share/man/man1
	install libfoobar.so $(DESTDIR)${sharedlibdir}
	install include/* $(DESTDIR)${includedir}

clean:
	rm -f foo bar foo_buz bar_buz libfoobar.so
