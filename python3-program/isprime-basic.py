n = int(input())

ch = True

for i in range(2, n):
    if n % i == 0:
        ch = False

print(ch)
