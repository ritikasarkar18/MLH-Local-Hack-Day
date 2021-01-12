from datetime import date
import time

start=date.today()

def generate(n):
        num=int(round(time.time())+start.day+start.month)%(n)
        return num


print("#####Random Number Generator#####")
print("---------------------------------")
print("Lower bound = 0 (by default)")
n=int(input("Enter upper bound: "))
print("---------------------------------")
print("The random number is ",generate(n))
