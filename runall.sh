#!/bin/bash

cases=${1:-1000000}
echo "Number of test cases: $cases"
echo "Running all programs..."
echo

echo "--- C ---"
gcc -O pi.c
./a.out <<< $cases 
rm a.out
echo

echo "--- C++ ---"
g++ -O pi.cpp
./a.out <<< $cases 
rm a.out
echo

echo "--- Swift ---"
swift -O pi.swift <<< $cases
echo

echo "--- Python ---"
python pi.py <<< $cases 
echo

echo "--- Javascript ---"
node pi.js <<< $cases
echo
