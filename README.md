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
