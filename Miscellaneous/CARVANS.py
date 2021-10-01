'''
        Problem Statement : Carvans
        Link : https://www.codechef.com/LRNDSA01/problems/CARVANS
        score : accepted
'''
for _ in range(int(input())):
    cars = int(input())
    speed = list(map(int, input().split()))
    max_speed = speed[0]
    count = 0
    for sp in speed:
        if max_speed >= sp:
            count += 1
            max_speed = sp
    print(count)

