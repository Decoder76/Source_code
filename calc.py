def add(x , y):
      z = x + y
      print("\nIts your result user:{}".format(z))
def subt(x , y):
      z = x - y
      print("\nIts your result user:{}".format(z))
def mult(x , y):
      z = x ** y
      print("\nIts your result user:{}".format(z))
#
#
#
#
print("[1].Addition")
print("[2].Subtract")
print("[3].Multiple n times a number.")
print("[4].factorial")
#Taking input from user to serve better from it.

ALG = int(input("\nWhich expression you want to compute :"))

if ALG == 1:
     var1 = int(input("Enter 1 operand of 'op1' + 'op2':"))                
     var2 = int(input("Enter 2 operand of  op1  + 'op2':"))
     add(var1,var2)
elif ALG == 2:
      var1 = int(input("Enter 1 operand of 'op1' - 'op2' :"))
      var2 = int(input("Enter 2 operand of  op1  - 'op2':"))
      subt(var1,var2)
elif ALG == 3:
      var1 = int(input("Enter 1 operand of 'op1' ^ 'op2':"))
      var2 = int(input("Enter 2 operand of  op1  ^ 'op2':"))
      mult(var1,var2)
else :
      print("***************************************")
      print("\n************Coming soon...*************")
      print("\n***************************************\n")


#def div(int x,int y):
    #  z = x / y
   #   print("\n\nIts your result user:",z) 