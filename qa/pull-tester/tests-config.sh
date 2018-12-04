#!/bin/bash
# Copyright (c) 2013-2014 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

BUILDDIR="/home/gvem/cpp/badaboom/uniasset"
EXEEXT=""

# These will turn into comments if they were disabled when configuring.
ENABLE_WALLET=1
ENABLE_UTILS=1
ENABLE_BITCOIND=1

if [ "x${EXEEXT}" = "x.exe" ]; then
    REAL_BITCOIND="$(which wine) $BUILDDIR/src/uniassetd${EXEEXT}"
    REAL_BITCOINCLI="$(which wine) $BUILDDIR/src/uniasset-cli${EXEEXT}"
else
    REAL_BITCOIND="$BUILDDIR/src/uniassetd${EXEEXT}"
    REAL_BITCOINCLI="$BUILDDIR/src/uniasset-cli${EXEEXT}"
fi
