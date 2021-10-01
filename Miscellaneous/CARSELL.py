'''
Problem Statement : Sell All the Cars
Link : https://www.codechef.com/APRIL20B/problems/CARSELL
score : accepted
'''

for _ in range(int(input())):
    N = int(input())
    price = list(map(int,input().split()))
    price.sort(reverse=True)
    profit = 0
    year = 0
    for p in price:
        if p-year > 0:
            profit = profit + (p-year)
        else:
            break
        year = year + 1

    print(profit%(10**9+7))

