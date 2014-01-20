//
//  Bridge.h
//  OnedayPlugin
//
//  Created by Gonzalez, Mario on 1/20/14.
//  Copyright (c) 2014 Gonzalez, Mario. All rights reserved.
//
//
//#ifndef __OnedayPlugin__Bridge__
//#define __OnedayPlugin__Bridge__
//
//#include <iostream>
//
//#endif /* defined(__OnedayPlugin__Bridge__) */


extern "C" {
    void CallMethod();
    const char* ReturnString();
    int ReturnInt();
}