//
// Created by Akito Nozaki on 3/13/17.
//

#pragma once

#ifndef RUNTIMECPPFORAPPLE_MONITORSOURCECHANGE_H
#define RUNTIMECPPFORAPPLE_MONITORSOURCECHANGE_H

#include <string>

using namespace std;

class MonitorSourceChange {
public:
    void addWatchDirectory(string directory);
    void start();

private:
    class Private;
    Private *d;

    void startWatchingDirectory();
};

#endif //RUNTIMECPPFORAPPLE_MONITORSOURCECHANGE_H



