#!/bin/bash -x

MXE_ROOT=$HOME/mxe
VERSION_INC=./src/version.inc
VERSION=`cat $VERSION_INC | cut -d '=' -f 2` # VERSION=x.x.x
TMPDIR="./tmp"
GLIB_SCHEMAS=$MXE_ROOT/usr/i686-w64-mingw32.static/share/glib-2.0/schemas

if [[ $# > 0 ]]; then
	VERSION=$1
fi

function errorexit
{
	echo -e "\033[31;1m*** ERROR ***: \033[0m" $2
	exit $1
}

function build
{
	make -C ./src -f Makefile.mxe clean || errorexit 1 "pre-build cleanup failed"
	make -C ./src -f Makefile.mxe all -j2 || errorexit 1 "build error"
}

echo "Checking for dependencies..."

command -v makensis || errorexit 1 "makensis not found"
command -v $QMAKE || errorexit 1 "qmake not found"

if [ ! -d $GLIB_SCHEMAS ]; then
	exit GLIB Schemas not found at $GLIB_SCHEMAS
fi

echo $MXE_ROOT
echo $VERSION

build

rm -rf $TMPDIR
mkdir $TMPDIR
cp src/*.exe $TMPDIR
cp -r windows_build_resources/* $TMPDIR
mkdir -p $TMPDIR/share/glib-2.0
cp $GLIB_SCHEMAS -r $TMPDIR/share/glib-2.0
cp LICENSE $TMPDIR/LICENSE.txt
cp README.md $TMPDIR
cp README.md $TMPDIR/readme.txt
mkdir -p 

makensis -DVERSION=$VERSION -V4 scripts/gcn64ctl.nsi
