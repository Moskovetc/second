#!/bin/sh
BUILD_DIR_NAME=build
echo "start build..."

string='My long string'
if [[ $PWD == *"scripts"* ]]; then
  cd .. 
fi 

rm -rf $BUILD_DIR_NAME
mkdir $BUILD_DIR_NAME
cmake -S . -B $BUILD_DIR_NAME
