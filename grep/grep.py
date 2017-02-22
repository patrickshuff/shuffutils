#!/bin/env python3
import sys

def main():
    if len(sys.argv) == 2:
        of = sys.stdin
    elif len(sys.argv) == 3:
        of = open(sys.argv[2], 'r')
    else:
        print('Usage: grep "grep string" filename')
        sys.exit(1)

    grep_string = sys.argv[1]
        
    for line in of:
        if grep_string in line:
            print(line.strip())

if __name__ == '__main__':
    main()
