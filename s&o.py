n = int(input())
oskols = list(map(int, input().split()))
m = int(input())

for _ in range(m):
    xi, yi = map(int, input().split())
    xi -= 1  
    yi -= 1 

   
    if xi > 0:
        oskols[xi - 1] += yi 
    if xi < n - 1:
        oskols[xi + 1] += oskols[xi] - (yi + 1) 
    oskols[xi] = 0


for count in oskols:
    print(count)
