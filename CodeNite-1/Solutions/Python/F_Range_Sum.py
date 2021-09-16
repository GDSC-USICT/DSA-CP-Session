#Author: Tushar Khanduri
a = input()
[n,q] = a.split(" ")
n,q = int(n),int(q)

a = input()
a = a.split(" ")
a = [int(i) for i in a]

b = [0]*(n+1)

for i in range(q):
    temp = input()
    [l,r,x] = temp.split(" ")
    l,r,x = int(l),int(r),int(x)
    l-=1
    r-=1
    b[l] +=x
    b[r+1] -=x

pref = [0]*n
pref[0] = b[0]
for i in range(1,n):
    pref[i] = b[i] + pref[i-1]

for i in range(n):
    print(a[i]+pref[i],end=" ")