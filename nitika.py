t=int(input())
arr = []

for i in range(0,t):
    str = input()
    str = str.lower()
    x=str.count(" ")

    if x is 2:
        a,b,c = str.split(" ")
        a= a.capitalize()
        a_new = a[0]+"."
        b= b.capitalize()
        b_new = b[0]+"."
        c= c.capitalize()
        d = a_new + " " + b_new + " " + c
        arr.append(d)

    elif x is 1:
        a,b = str.split(" ")
        a= a.capitalize()
        a_new = a[0]+"."
        b= b.capitalize()
        c = a_new + " " + b
        arr.append(c)

    elif x is 0:
        str = str.capitalize()
        arr.append(str)

for item in arr:
    print(item)
