#include "LinkedList.h"
#include "Stack.h"

#ifndef AADT_LAB1_APPLICATION_H
#define AADT_LAB1_APPLICATION_H


class Application {
public:
    Application();
    void showMenu(char choice);
    int ListWork();
    int StackWork();
    int ArrayWork();
    int exec();

};


#endif //AADT_LAB1_APPLICATION_H