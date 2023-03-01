class employee:
    def __init__(self,n,s,a):
        self.name=n #public
        self.salary=s #public
        self.age=a #private
    def disp(self):
          print("name=",self.name)
          print("salary=",self.salary)
          print("age=",self.__age) #can be access
         
emp1=employee("SUN",2009,35)
emp1.disp()
print(emp1.name)
print(emp1.salary)
#access private member directly
print(emp1._employee__age)
#can't access directly
print(emp1.__age)