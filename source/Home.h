//
// Created by Tyrone Swinnie on 8/10/16.
//

#ifndef PROJECT_NAME_HOME_H
#define PROJECT_NAME_HOME_H

#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;


class Home  {
public:
    Home();
    WTemplate *home_template();
    WTemplate *_home;
    ~Home();

};


#endif //PROJECT_NAME_HOME_H
