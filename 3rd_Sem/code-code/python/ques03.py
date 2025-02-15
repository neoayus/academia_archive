# takeing string as input from user. 
input_string = input("Enter a String: ")
output_string = "" ; 

#using array method. 
for i in range (len(input_string)-1,-1,-1):
   output_string += input_string[i] 

#printing reversed string. 
print(output_string)