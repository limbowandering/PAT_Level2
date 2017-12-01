#!/bin/bash

if test -s "$1"
then
  g++ "$1"
  ./a.out
  rm ./a.out
else
  echo "No input!"
fi
