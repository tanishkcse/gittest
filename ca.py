'''def Fibonacci(n):
    if n<= 0:
        print("Incorrect input")
    elif n == 1:
        ______________
    elif: 
        return 1
    else:
        return '''
'''def Test(list):

    first = list.pop(0)  
    last = list.pop(-1)
    list.insert(0, last) 
    list.append(first)  
    return list
     
newList = [12, 35, 9, 56, 24]
print(Test(newList))'''
'''def Test(s):
    return s == s[::-1]   #line 2

s = "malayalam"
ans = Test(s)
 
if ans:                 #line 5
    print("Yes")
else:
    print("No")'''
'''t1=(1,2,3,4,5,6,7,8)'''
'''print(t1[2:4])'''
t=(4,0,'Hello',90,'Two',('One',45),34,2)
t1=t[1]+t[-2]
print(t1)