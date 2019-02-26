##
# James Fox 
# CS 3560
# Homework 5
# 02/25/2019
# Program outputs number of lines, words, and characters in all files in current directory
##


import sys

for line in sys.stdin:
        info = line.split()
        
print "Number of lines: ", info [0]
print "Number of Words: ", info[1]
print "Number of Characters: ", info[2]
