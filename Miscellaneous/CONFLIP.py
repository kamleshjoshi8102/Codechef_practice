'''
    Problem Statement : Coin Flip 
    Link : https://www.codechef.com/LRNDSA01/problems/CONFLIP
    score : accepted
'''
import math
for _ in range(int(input())):
    G = int(input())
    for g in range(G):
        I,N,Q = list(map(int,input().split()))
        change = same = int(N/2)
        if N%2==1:
            change = math.ceil(N/2)
            same = N//2
        if I==Q:
            print(same)
        else:
            print(change)
        

