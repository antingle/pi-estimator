#!/bin/bash

cases=${1:-100000}
echo "Number of test cases: $cases"
echo "Running all programs..."
echo

echo "--- C ---"
gcc pi.c
./a.out <<< $cases 
rm a.out
echo

echo "--- C++ ---"
g++ pi.cpp
./a.out <<< $cases 
rm a.out
echo

echo "--- Swift ---"
swift pi.swift <<< $cases 
echo

echo "--- Python ---"
python pi.py <<< $cases 
echo
