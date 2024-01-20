// This file is based on part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: Mult.asm

// Multiplies R1 and R2 and stores the result in R0.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@R1
D=M

@R0 
M=D

@R2
D=M 

@R3
M=1

@R5
M=D

@LOOP
D;JGE 
D=-D

@R2
M=D
(LOOP)

@R3
D=M

@R2
D=D-M 

@ENDLOOP
D;JGE

@R1
D=M 

@R0 
M=D+M 

@R3 
M=M+1 

@LOOP 
0;JMP

(ENDLOOP)

@R5
D=M

@END
D;JGE

@R0
D=M 
D=-D
M=D
(END)

@END
0;JMP
