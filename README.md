foobar
======

Debian C package that produces multiple binary packages

Build
-----

debuild -us -uc

or

dpkg-buildpackage -b

Install
-------

sudo dpkg -i ../foo-.deb

csmake
------

MAKE=/usr/local/bin/csmake dpkg-buildpackage -b

Packages
--------

* foo
    - foo: prints foo
        - file1.c
            - fun1()
            - main()
    - foo_buz: prints foo
        - buz.c
            - foo_fun()
            - bar_fun()
* bar
    - bar: prints bar
        - file2.c
            - fun2()
            - main()
    - bar_buz: prints bar
        - buz.c
            - foo_fun()
            - bar_fun()
* foobar-dev
    - include/: (libfile1.h, libfile2.h, libfile3.h, libfile4.h)
    - lib/: (libfoobar.so, libfoobar.a)
        - libfoobar.so
            - libfile1.c
                - libfun1()
            - libfile2.c
                - libfun2()
        - libfoobar.a
            - libfile3.c
                - libfun3()
            - libfile4.c
                - libfun4()
    - test
        - test.c
            - main(): calls libfun3()
