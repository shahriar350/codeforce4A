a = input()
n = int(a.split()[0])
m = int(a.split()[1])

user_check = 0
i = 0
k = min(n, m)

if k % 2 == 0:
    print("Malvika")
else:
    print("Akshat")
