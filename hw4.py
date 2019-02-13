#################################################
#	Program: hw4				#
#	Author:	 Jacob Butch			#
#	Date:	 13 February 2019		#
#################################################
sum = 0
for number in range(1000):
  if ( number % 3 == 0 or number % 5 == 0):
    sum += number

print("The sum of multiples of 3 or 5 is ", sum)