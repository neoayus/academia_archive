# Prompt the user to input a positive integer N. This integer represents the number of lines in the pattern.

#input handling 
n = int(input("input a positive integer N : ")) ; 

#variable to store sum of all the numbers 
sum = 0 ; 
#pattern generation 
for i in range(1,n+1): 
   for j in range(1,i+1): 
      print(j, end=" ") 
      j = j+1  
      sum += j
   print("\n") 

#printing sum 
print("Sum of all Numbers in the Pattern = ",sum) ;