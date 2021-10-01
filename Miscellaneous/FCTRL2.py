'''
Problem Statement : Small factorials
Link : https://www.codechef.com/problems/FCTRL2
score : accepted
'''

for _ in range(int(input())):
    number = int(input())
    fact = 1
    for i in range(number,0,-1):
        fact = fact * i
    print(fact)

