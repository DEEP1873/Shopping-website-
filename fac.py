#include<stdio.h>

def factorial(n):
  if n == 0:
    return 1
  elif n==1:
    return 1  
  else:
    return n * factorial(n-1);

num = int(input("Enter Number to find Factorial: "))
print("Factorial of", num, "is",factorial(num))