// The machine code generated by your program should go here

@1
D = A
@SP
A = M
M = D
@SP
M = M+1

@2
D = A
@SP
A = M
M = D
@SP
M = M+1

@SP 
AM = M-1 
D = M 
A = A-1  
M = D|M 

(END)
    @END
    0;JMP
