#!/bin/bash

BUILD_DIR_NAME="build"

# Check if current called directory is script then change directory to above
if [ "$(basename "$PWD")" == "scripts" ]; then
  cd ..
fi

# Check provided arguments and print them to console else print "No arguments provided"
if [ $# -eq 0 ]; then
  echo "No arguments provided"
else
  echo "Arguments provided: $@"
fi
echo "start building ..."

# Check if arguments contain "test" and perform actions accordingly
if [[ " $@ " =~ " test " ]]; then
  rm -rf $BUILD_DIR_NAME
  mkdir $BUILD_DIR_NAME
  cd $BUILD_DIR_NAME
  cmake -S .. -B .
  make all
  make test
  cd ..
else
  rm -rf $BUILD_DIR_NAME
  mkdir $BUILD_DIR_NAME
  cd $BUILD_DIR_NAME
  cmake -S .. -B .
  cd ..
fi