import sys
def heapify(li, m, n):
    l = m * 2;
    r = m * 2 + 1
    s_m = m
    if(l <= n and li[m] > li[r]):
        s_m = l
    if(r <= n and li[s_m] > li[r]):
        s_m = r
    if s_m != m:
        li[m], li[s_m] = li[s_m], li[m]
        return heapify(li, m, n)

def heapsort(l):
    n = len(l)
    l = [0] + l
    li = []
    for i in range(n, 0, -1):
        heapify(v, i, n)

    for i in range(n, 0, -1):
        print(v[1])
        li += v[1]
        v[i], v[1] = v[1], v[i]
        heapify(v, 1, i - 1)
        

def main():
    inputlist = sys.argv
    #del inputlist[0]

    returnlist =  heapsort(inputlist)



main()
