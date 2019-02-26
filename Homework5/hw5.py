import sys

line = ""
for line in sys.stdin: pass
directory = line.split()
print "Lines -", directory[0]
print "Words -", directory[1]
print "Total -", directory[2]

