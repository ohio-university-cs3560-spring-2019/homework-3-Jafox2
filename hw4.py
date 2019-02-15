sum = 0
print ("All natural numbers below 10 that are multiples of 3 or 5")
for x in range (1,10):
    if ((x % 3 == 0) or (x % 5 == 0)):
        print (x)
        sum += x

print ("Their sum: ", sum)
sum = 0

#All natural numbers below 1000 that are multiples of 3 or 5
for x in range (1,1000):
    if ((x % 3 == 0) or (x % 5 == 0)):
        sum += x

print ("All natural numbers below 1000 that are multiples of 3 or 5 have a sum of: ", sum)
