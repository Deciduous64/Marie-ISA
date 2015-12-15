#ifndef MICROPROCESSOR_H
#define MICROPROCESSOR_H
#include <QString>

//All code in microprocessor.cpp coded by Daniel unless stated otherwise
//Creates the MARIE namespace, within it the Microprocessor class
//Defines Microprocessor function prototypes

namespace MARIE {
class Microprocessor {
    int arr[4095];

private:
    //Memory memory;

    int opcode;

public:

    bool stopped = false;

    int read (int address);
    void write (int address, int value);

    int MAR=0;
    int PC=0;
    int MBR=0;
    int AC=0;
    int IR=0;
    int InREG=0;
    int OutREG=0;

    Microprocessor();

    void runInstruction(QString inst);

private:

    void fetch();

    void decode(QString inst);

    void execute(QString code);

    void jns();

    void load();

    void store();

    void add();

    void subt();

    void input();

    void output();

    void halt();

    void skipcond(QString code);

    void jump();

    void clear();

    void addi();

    void jumpi();

    void loadi();

    void storei();

public:

    void reset();

};

}
#endif // MICROPROCESSOR_H
