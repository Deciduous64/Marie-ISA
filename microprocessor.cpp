#include "microprocessor.h"
#include "mainwindow.h"
#include <QString>

//All code in microprocessor.cpp coded by Daniel unless stated otherwise
//Exists as function definitions

MARIE::Microprocessor::Microprocessor()
{
}

//Reads from array arr (memory) at the specified key (usually MAR)
int MARIE::Microprocessor::read (int key)
{
    if (arr[key] != NULL || (0 <= key && key < 4095)) {
        return (arr[key]);
    }
    else return NULL;
}

//Writes to array arr (memory) using inputted value (MBR) at specified key (MAR)
void MARIE::Microprocessor::write (int key, int value)
{
    if (0 <= key && key < 4095) {
        arr[key] = value;
    }
}

//Runs the inputted instruction
void MARIE::Microprocessor::runInstruction(QString inst)
{
    QString code = inst;

    fetch();
    decode(code);
    execute(code);
}

//Fetches and sets IR to the value at address corresponding to PC
void MARIE::Microprocessor::fetch()
{
    MAR = PC;
    IR = read(MAR);
    PC = PC + 1;
}

//Decodes the inputted instruction, sorting address and opcode
void MARIE::Microprocessor::decode(QString inst)
{
    bool b;
    MAR = inst.mid(4).toInt(&b, 2);
    opcode = inst.mid(0,4).toInt();
    MBR = read(MAR);
}

//Based on opcode, selects required function
void MARIE::Microprocessor::execute(QString code) {
    switch (opcode) {
    case 0000: jns();        break;
    case 0001: load();       break;
    case 0010: store();      break;
    case 0011: add();        break;
    case 0100: subt();       break;
    case 0101: input();      break;
    case 0110: output();     break;
    case 0111: halt();       break;
    case 1000: skipcond(code);   break;
    case 1001: jump();       break;
    case 1010: clear();      break;
    case 1011: addi();       break;
    case 1100: jumpi();      break;
    case 1101: loadi();      break;
    case 1110: storei();     break;
    }
}

//Instruction Jump and Store
void MARIE::Microprocessor::jns()
{
    MBR = AC;
    write(MAR, MBR);
    MBR = MAR;
    AC = 1;
    AC = AC + MBR;
}

//Instruction load, sets the AC to the value at address specified (MBR)
void MARIE::Microprocessor::load()
{
    AC = MBR;
}

//Instruction store, assigns value (AC) to address specified (MAR)
void MARIE::Microprocessor::store()
{
    MBR = AC;
    write(MAR, MBR);
}

//Instruction add, adds the values of the AC and MBR, sets AC
void MARIE::Microprocessor::add()
{
    AC = (AC + MBR);
}

//Instruction subtract, subtracts the values of the AC and MBR, sets AC
void MARIE::Microprocessor::subt()
{
    AC = (AC - MBR);
}

//Instruction input, sets the InREG (AC)
void MARIE::Microprocessor::input()
{
    AC = InREG;
}

//Instruction output, sets the AC (OutREG)
void MARIE::Microprocessor::output()
{
    OutREG = AC;
}

//Instruction halt, halts running from the instruction list
//CURRENTLY AIN'T WORKIN YET
void MARIE::Microprocessor::halt()
{
    stopped = true;
}

//Instruction skip condition, skips the next intruction if condition met
void MARIE::Microprocessor::skipcond(QString code)
{
    QString IRsec = code.mid(4,2);
    if ((IRsec == "00" && AC < 0) || (IRsec == "01" && AC == 0) || (IRsec =="10" && AC > 0))
        PC = PC + 1;
}

//Instruction jump, sets the PC (MAR)
void MARIE::Microprocessor::jump()
{
    PC = MAR;
}

//Instruction clear, clears the AC
void MARIE::Microprocessor::clear()
{
    AC = 0;
}

//Instruction indirect add, performs inderect adding
void MARIE::Microprocessor::addi()
{
    MAR = MBR;
    MBR = read(MAR);
    AC = AC + MBR;
}

//Instruction inderect jump, performs inderect jumping
void MARIE::Microprocessor::jumpi()
{
    PC = MBR;
}

//Instruction indirect load, performs inderect loading
void MARIE::Microprocessor::loadi()
{
    MAR = MBR;
    MBR = read(MAR);
    AC = MBR;
}

//Instruction indirect store, performs inderect storing
void MARIE::Microprocessor::storei()
{
    MAR = MBR;
    write(MAR, AC);
}

//Resets all values
void MARIE::Microprocessor::reset()
{
    AC = 0; MAR = 0; MBR = 0; IR = 0; PC = 0; OutREG = 0; InREG = 0;
}

