n= int(input('enter a no:'))
sum=0
for i in range(1,n):
  if(n%i==0):
     sum = sum+i
if(sum==n):
         print("the number is  perfect")
else:
        print("the number is not perfect") 
        
        
    