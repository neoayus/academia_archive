#taking a DNA Sequence in input. 
dna = input("Enter a DNA Sequence : ") ;

#DNA Nucleotides
dna_a = "adenine"
dna_c = "cytosine"
dna_g = "guanine"
dna_t = "thymine"

#RNA Nucleotides
A = dna_t 
C = dna_g
G = dna_c
T = dna_a

# printing RNA Nucleotides for given DNA. 
print("Nucleotides in given DNA are : ") 
for i in range(0,len(dna),1):
   nucleotide = str.upper(dna[i]) 
   if nucleotide == 'A':
      print(A) 
   if nucleotide == 'C':
      print(C) 
   if nucleotide == 'G': 
      print(G) 
   if nucleotide == 'T': 
      print(T) 

