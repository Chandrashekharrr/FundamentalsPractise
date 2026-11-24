# class cars:

#     def __init__ (self, brand, year):
#         self.brand = brand
#         self.year = year
#     def __str__(self):
#         return f"Brand: {self.brand}, Year: {self.year}"

# car1  = cars("bmw", 2003)
# car2  = cars("audi", 2008)
# car3  = cars("bmw", 2009)

# print(car3)


# class Students:
#     def __init__ (self, name, age):
#         self.name = name
#         self.age = age
#     def showDetails(self):
#         print (f"Student Name: {self.name}, age {self.age}")

# student = [ Students("mahes",45),
#   Students("joe",23),
#   Students("vistor",15),
#  Students("priya",42),
#   Students("akash",52)]

# for stud in student:

#     stud.showDetails()


# class rect:
#     def __init__(self, width, height):
#         self.width = width
#         self.height = height

#     def area(self):
#         print(self.width*self.height)

# rectangle = [ 
#     rect(4,2),
#     rect(4,1),
#     rect(4,2),
#     rect(4,3),
#     ]

# for rectan in rectangle:
#     rectan.area()


# class Counter:

#     def __init__(self):    
#         self.count = 0
    
#     def increment(self):
#         self.count += 1


#     def getCount(self):
#         return self.count

# first = Counter()

# first.increment()
# first.increment()
# first.increment()

# print(first.getCount())


# class BankAccount:
#     def __init__ (self, credit, debit):
#         self.credit = credit
#         self.debit = debit

#     opening_balance = 500

#     def deposit(self,amount):
#         self.opening_balance += amount
#         return self.opening_balance

#     def withdraw(self, amount):
#         if amount>self.opening_balance:
#             print("Insufficient Balance!")
            
#         self.opening_balance -= amount
#         return self.opening_balance

#     def getBal(self):

#         return self.opening_balance


# user = BankAccount(0,0)

# print(user.deposit(200))
# print(user.withdraw(800))
# print(user.getBal())

# arr = [1,2,3,4,5,6,7,8,9,10]
# even = 0
# odd = 0

# for i in range(len(arr)):
#     if i % 2 == 0:
#         even += 1
#     else:
#         odd += 1

# print(f"even numbers: {even}")
# print(f"odd numbers: {odd}")

# arr = [89,90,78]
# large = 0 # large = arr[0]  we use this for negative numbers
# for el in arr:
#     if el > large:
#         large = el

# print(large)


