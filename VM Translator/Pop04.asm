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
M = D+M

@SP
M = M-1
@ARG
D = M
@result
D = D+A
@R13
M = D
@SP
A = M
D = M
@R13
A = M
M = D

(END)
    @END
    0;JMP
