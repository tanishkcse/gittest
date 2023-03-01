num=int(input("Enter a number: "))
digit=len(str(num))
sum=0
temp=num
while(temp!=0):
    rev=temp%10
    temp=temp//10
    x=pow(rev,digit)
    sum=sum+x
    
if(sum==num):
  print("number is armstrong")
else:
    print("number is not armstrong")