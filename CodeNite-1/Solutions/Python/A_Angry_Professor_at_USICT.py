#author: Tushar Khanduri
n = int(input())
a = input()
a = a.split(" ")
zero,one = 0,0

for i in a:
    if i=='0':
        zero+=1
    else:
        one+=1
if one>=zero:
    print("Yes")
else:
    print("No")