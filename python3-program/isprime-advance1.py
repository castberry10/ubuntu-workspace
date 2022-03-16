import math 


n = int(input())

ch = True

for i in range(2, int(math.sqrt(n) + 1)):
    if n % i == 0:
        ch = False

print(ch)
