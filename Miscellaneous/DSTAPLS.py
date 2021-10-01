'''
    Problem statement : Distribute Apples 
    Link : https://www.codechef.com/problems/DSTAPLS
    results : 30pts
'''

test = int(input())
for i in range(test):
    N,K = input().split(" ")
    N = int(N)
    K = int(K)
    user1=[0]*K
    user2=[0]*K
    i=0
    user1_N = N
    user2_N = N

    user1 = [N/K]*K
    user1_N = N%K
    while(user1_N!=0):
        user1[i%K]=user1[i%K]+1
        user1_N = user1_N -1
        i=i+1
    
    i=0
    while(user2_N!=0):
        if user2_N>=K:
            user2[i%K]=user2[i%K]+K
            user2_N = user2_N-K
        else:
            user2[i%N]=user2[i%N]+user2_N
            user2_N = user2_N-user2_N
        i=i+1
    
    ans=False
    if user1==user2:
        ans=True

    if ans:
        print("NO")
    else:
        print("YES")
        
