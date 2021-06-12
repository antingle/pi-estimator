# Pi Estimator
This program uses a random uniform distribution of doubles between 0 and 1 to estimate pi based on how many points are located in a radius of 1 compared to a square of 1 by 1.

*Test run on iMac 2017, Intel i7-7700K on macOS 11.4:*
``` console 
% ./piC 
Number of test cases: 10000000
Pi estimation: 3.141878 
Time taken: 0.515146 seconds
````


# Executing in a UNIX environment
When running the program, it will ask for a number of test cases. The more you enter the more accurate the pi estimation will be, and the longer it will take to execute.

## In C
```console
gcc -o piC pi.c
```
then
```console
./piC
```

## In C++
```console
g++ -o piCpp pi.c
```
then
```console
./piCpp
```

## In Swift
First check that you have Swift installed with
```console
swift --version
```
It should be installed if you have Xcode installed. 
Then you can run with
```console
swift pi.swift
```
this will build and run in one command.

## In Python
First check that you have Python installed with
```console
python --version
```
Then run with
```console
python pi.py
```
