#!/bin/sh

start=`pwd`
mkdir /tmp/opie
cd /tmp/opie
ar x /usr/lib/libopie.a
gcc -shared -Wl,-soname,libopie.so -o libopie.so *.o
cp libopie.so $start/
cd $start
rm -rf /tmp/opie
