'''
    Problem Statement : Ciel and Receipt
    Link : https://www.codechef.com/problems/CIELRCPT
    Score : accepred
'''
for _ in range(int(input())):
    P = int(input())
    menus = 0
    while(P>0):
        for i in range(12,0,-1):
            cost = pow(2,i-1)
            if cost <= P:
                P=P-cost
                menus += 1
                break
    print(menus)

