foobar
======

Debian C package that produces multiple binary packages

Build
-----

debuild -us -uc

or

dpkg-buildpackage

Install
-------

sudo dpkg -i ../*.deb
