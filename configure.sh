#!/bin/bash

CCFLAGS="$CCFLAGS -I`pwd`/depends/x86_64-pc-linux-gnu/include/QtCore "
CCFLAGS="$CCFLAGS -I`pwd`/depends/x86_64-pc-linux-gnu/include/QtDBus "
CCFLAGS="$CCFLAGS -I`pwd`/depends/x86_64-pc-linux-gnu/include/QtNetwork "
CCFLAGS="$CCFLAGS -I`pwd`/depends/x86_64-pc-linux-gnu/include/QtWidgets "
CCFLAGS="$CCFLAGS -I`pwd`/depends/x86_64-pc-linux-gnu/include/QtGui "

CPPFLAGS=$CCFLAGS    ./configure --prefix=`pwd`/depends/x86_64-pc-linux-gnu --disable-shared
