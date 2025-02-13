def min_horseshoes(s1, s2, s3, s4):
    unique_colors = len(set([s1, s2, s3, s4]))
    return 4 - unique_colors


s1, s2, s3, s4 = map(int, input().split())
print(min_horseshoes(s1, s2, s3, s4))
