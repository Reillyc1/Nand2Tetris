#include <string>
#include <ostream>
#include <iostream>

#include "VMTranslator.h"

using namespace std;

/** Generate Hack Assembly code for a VM push operation assessed in Practical Assignment 6 */
string VMTranslator::vm_push(string segment, int offset)
{
    if (segment == "constant")
    {
        std::cout << "@" << offset << std::endl;
        std::cout << "D = A" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "temp") 
    {
        std::cout << "@R" << to_string(5+offset) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "pointer") 
    {
        std::cout << "@R" << to_string(3+offset) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "static") 
    {
        std::cout << "@" << segment << "." << to_string(offset) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "this") 
    {
        std::cout << "@THIS" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "A = D" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "that") 
    {
        std::cout << "@THAT" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "A = D" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "argument") 
    {
        std::cout << "@ARG" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "A = D" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else if (segment == "local") 
    {
        std::cout << "@LCL" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "A = D" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    else
    {
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "A = D+A" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    return "";
}

/** Generate Hack Assembly code for a VM pop operation assessed in Practical Assignment 6 */
string VMTranslator::vm_pop(string segment, int offset)
{
    if (segment == "temp") 
    {
        std::cout << "@R" << to_string(offset+5) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "AM = M-1" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;

        return "";
    }
    else if (segment == "pointer") 
    {
        std::cout << "@R" << to_string(offset+3) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "AM = M-1" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;

        return "";
    }
    else if (segment == "static") 
    {
        std::cout << "@SP" << std::endl;
        std::cout << "M = M-1" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "M = D" << std::endl;

        return "";
    }
    else if (segment == "this") 
    {
        std::cout << "@SP" << std::endl;
        std::cout << "M = M-1" << std::endl;
        std::cout << "@THIS" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;

        return "";
    }
    else if (segment == "that") 
    {
        std::cout << "@SP" << std::endl;
        std::cout << "M = M-1" << std::endl;
        std::cout << "@THAT" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;

        return "";
    }
    else if (segment == "argument") 
    {
        std::cout << "@SP" << std::endl;
        std::cout << "M = M-1" << std::endl;
        std::cout << "@ARG" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;

        return "";
    }
    else if (segment == "local") 
    {
        std::cout << "@SP" << std::endl;
        std::cout << "M = M-1" << std::endl;
        std::cout << "@LCL" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = D+A" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@R13" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;

        return "";
    }
    else
    {
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@" << to_string(offset) << std::endl;
        std::cout << "A = D+A" << std::endl;
        std::cout << "D = M" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "A = M" << std::endl;
        std::cout << "M = D" << std::endl;
        std::cout << "@SP" << std::endl;
        std::cout << "M = M+1" << std::endl;

        return "";
    }
    return "";
}

/** Generate Hack Assembly code for a VM add operation assessed in Practical Assignment 6 */
string VMTranslator::vm_add()
{
    std::cout << "@SP" << std::endl;
    std::cout << "AM = M-1" << std::endl;
    std::cout << "D = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "M = D+M" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM sub operation assessed in Practical Assignment 6 */
string VMTranslator::vm_sub()
{
    std::cout << "@SP" << std::endl;
    std::cout << "M = M-1" << std::endl;
    std::cout << "A = M" << std::endl;
    std::cout << "D = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "D = M-D" << std::endl;
    std::cout << "M = D" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM neg operation assessed in Practical Assignment 6 */
string VMTranslator::vm_neg()
{
    std::cout << "@SP" << std::endl;
    std::cout << "A = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "M = -M" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM eq operation assessed in Practical Assignment 6 */
string VMTranslator::vm_eq()
{
    return "";
}

/** Generate Hack Assembly code for a VM gt operation assessed in Practical Assignment 6 */
string VMTranslator::vm_gt(){
    return "";
}

/** Generate Hack Assembly code for a VM lt operation assessed in Practical Assignment 6 */
string VMTranslator::vm_lt()
{
    return "";
}

/** Generate Hack Assembly code for a VM and operation assessed in Practical Assignment 6 */
string VMTranslator::vm_and()
{
    std::cout << "@SP" << std::endl;
    std::cout << "AM = M-1" << std::endl;
    std::cout << "D = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "M = D&M" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM or operation assessed in Practical Assignment 6 */
string VMTranslator::vm_or()
{
    std::cout << "@SP" << std::endl;
    std::cout << "AM = M-1" << std::endl;
    std::cout << "D = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "M = D|M" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM not operation assessed in Practical Assignment 6 */
string VMTranslator::vm_not()
{
    std::cout << "@SP" << std::endl;
    std::cout << "A = M" << std::endl;
    std::cout << "A = A-1" << std::endl;
    std::cout << "M = !M" << std::endl;

    return "";
}

/** Generate Hack Assembly code for a VM label operation assessed in Practical Assignment 7 */
string VMTranslator::vm_label(string label){
    return "";
}

/** Generate Hack Assembly code for a VM goto operation assessed in Practical Assignment 7 */
string VMTranslator::vm_goto(string label){
    return "";
}

/** Generate Hack Assembly code for a VM if-goto operation assessed in Practical Assignment 7 */
string VMTranslator::vm_if(string label){
    return "";
}

/** Generate Hack Assembly code for a VM function operation assessed in Practical Assignment 7 */
string VMTranslator::vm_function(string function_name, int n_vars){
    return "";
}

/** Generate Hack Assembly code for a VM call operation assessed in Practical Assignment 7 */
string VMTranslator::vm_call(string function_name, int n_args){
    return "";
}

/** Generate Hack Assembly code for a VM return operation assessed in Practical Assignment 7 */
string VMTranslator::vm_return()
{
    std::cout << "(END)" << std::endl;
    std::cout << "@END" << std::endl;
    std::cout << "0;JMP" << std::endl;

    return "";
}