//
// Created by Tyrone Swinnie on 8/12/16.
//

#ifndef PROJECT_NAME_ABOUT_H
#define PROJECT_NAME_ABOUT_H

#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;
class About {
public:
    About();
    WTemplate *about_template();
    ~About();


};


#endif //PROJECT_NAME_ABOUT_H
