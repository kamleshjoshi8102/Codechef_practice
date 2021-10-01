'''

 	 Problem Statement : Chef and Card Game
 	 Link : https://www.codechef.com/problems/CRDGAME
 	 Score : accepted

 '''
for _ in range(int(input())):
    N = int(input())
    chef = 0
    morty = 0
    for i in range(N):
        chef_card,morty_card = list(input().split())
        if sum(list(map(int,list(chef_card)))) > sum(list(map(int,list(morty_card)))):
            chef += 1
        elif sum(list(map(int,list(chef_card)))) < sum(list(map(int,list(morty_card)))):
            morty += 1
        else:
            chef += 1
            morty += 1
    if chef>morty:
        print(0,chef)
    elif morty>chef:
        print(1,morty)
    else:
        print(2,chef)
