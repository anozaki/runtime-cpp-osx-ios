//
// Created by Akito Nozaki on 3/13/17.
//

#include <thread>

#ifdef __APPLE__
#    ifdef TARGET_OS_IPHONE
#        include <MobileCoreServices/MobileCoreServices.h>
#    elif TARGET_OS_MAC
#        include <CoreServices/CoreServices.h>
#    endif
#endif

#include "MonitorSourceChange.h"

class MonitorSourceChangePlatform {

};

class MonitorSourceChange_Apple: public MonitorSourceChangePlatform {
public:
    MonitorSourceChange_Apple() : mThread( &MonitorSourceChange_Apple::run, this ) {
    }

    void start() {

    }

    void stop() {

    }

private:
    void run() {
        mRunLoop = CFRunLoopGetCurrent();
        CFRunLoopRun();
    }

    std::thread mThread;
    CFRunLoopRef mRunLoop;
};

void MonitorSourceChange::startWatchingDirectory() {
    // is there a thread already running?

    // need to create workThread
    // mRunLoop = CFRunLoopGetCurrent()
    //
}

