#Author: Tushar Khanduri
n = int(input())
a = input()
a = a.split(" ")
a = [int(i) for i in a]
height = max(a)

for h in range(height,0,-1):
    for i in a:
        if i>=h:
            print('*',end="")
        else:
            print(' ',end="")
    print("")
