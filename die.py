import math 
A, B = map(int, input().split())
m = max(A,B)
numerator = 7-m
denominator = 6
g = math.gcd(numerator, denominator)
a = numerator // g
b = denominator // g
print(f"{a}/{b}")
