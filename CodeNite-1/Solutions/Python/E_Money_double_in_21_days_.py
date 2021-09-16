#Author: Tushar Khanduri
#2(2 + 3x + 23x^2) = 46*x*x + 6*x + 4
def fx(x): 
    return 46*x*x + 6*x + 4

queries = int(input())

def bin_search(v):
    l,r = 0,v
    ans = v
    while l<=r:
        mid = (l+r)//2
        if fx(mid)<v:
            l = mid + 1 
        else:
            ans = mid
            r = mid - 1
    return ans

for q in range(queries):
    v = int(input())
    print(bin_search(v))