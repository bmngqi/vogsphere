#! /bin/sh

find . -type f -iname "*.sh" | sed 's/\.sh$//'
