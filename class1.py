'''
create a class in python which has two methods 
method 1 is get data of a student and 
method 2 is print data of a student'''
'''class A:
    def __init__(self,name,id,phno):
        self.name=name
        self.id=id
        self.phno=phno
        print("I have given my details")
    def showdata(self):
        print("See my details",self.name,self.id,self.phno)
obj = A("Ram",345,333333)'''
"""""
create three classes A,B,C 
A is having biodata
b is having hobby 
c is having marks and
there is multilavel inheritane A to B , B to C and
Create obj of only class 
but call method of all parents classes"""""

'''class A:
    def Bio(self):
        print("I am in python")
class B(A):
    def Hobbies(self):
        print("I love it")
class C(B):
    def marks(self):
        print("I scored 96%")
ob=C()
ob.Bio()
ob.Hobbies()
ob.marks()'''
#super 
'''class A:
    def Bio(self):
        print("I am in python")
class B(A):
    def Bio(self):
        super().Bio()
        print("I love python")
class C(B):
    def Bio(self):
        super().Bio()
        print("I scored 96%")
ob=C()
ob.Bio()'''
fruits=["Apple/n","Orange/n","Graphes/n","Watermelon"]

f=open("add.txt","w")
f.writelines(fruits)
f.close()

f=open("add.text","r")
print(f.read())


  