t = int(input())
result = []

for i in range(0,t):
    str = input()

    start = str.startswith("not ")
    end = str.endswith(" not")

    x= -1
    y= -1

    #only not wala case check kro
    x = str.find(" not ")

    if len(str) is 3 and str.startswith("not") is True and str.endswith("not") is True:
        y=0

    if start is True or end is True or x is not -1 or y is not -1:
        result.append(1)
    else:
        result.append(0)

for j in range(0,t):
    if result[j] == 1:
        print("Real Fancy")
    else:
        print("regularly fancy")
