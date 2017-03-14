#include <iostream>
#include "MonitorSourceChange.h"

int main() {
    MonitorSourceChange monitorSourceChange;
    monitorSourceChange.addWatchDirectory(".");
    monitorSourceChange.start();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}