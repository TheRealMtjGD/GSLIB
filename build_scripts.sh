#!/bin/sh

build_module()
{
    echo "  BUILD Src/$1 >> Scripts/$2"
    gcc Src/$1 -o Scripts/$2 > /dev/null
}

echo "Building Scripts GSLIB"

build_module "gslib.c" "gslib"
build_module "gsvm.c" "gsvm"