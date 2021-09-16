#Author: Tushar Khanduri
tc = int(input())

for i in range(tc):
    a = input()
    [n,m] = a.split(" ")
    n,m = int(n),int(m)
    print(n*m)