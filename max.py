x = int(input("enter 1st no"))
y = int(input())
z = int(input())
if(x>y and x>z):
    print("greatest", x)
elif(y>x and y>z):
    print("greatest", y)
elif(z>x and z>y):
    print("greatest" , z)