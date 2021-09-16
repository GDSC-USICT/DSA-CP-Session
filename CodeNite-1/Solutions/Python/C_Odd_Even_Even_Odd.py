#Author: Tushar Khanduri
tc = int(input())

for t in range(tc):
    n = input()
    odd,even=0,0
    for i,x in enumerate(n):
        num = int(x)
        if i&1:
            odd+=num
        else:
            even+=num
    if odd&1 and (not(even&1)):
        print("good")
    else:
        print("not good")