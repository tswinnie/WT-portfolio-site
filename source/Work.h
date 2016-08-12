//
// Created by Tyrone Swinnie on 8/12/16.
//

#ifndef PROJECT_NAME_WORK_H
#define PROJECT_NAME_WORK_H
#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;

class Work {
public:
    Work();
    WTemplate *work_template();
    ~Work();
};


#endif //PROJECT_NAME_WORK_H
