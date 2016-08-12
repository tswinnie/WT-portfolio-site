//
// Created by Tyrone Swinnie on 8/10/16.
//

#include "Home.h"

#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>


using namespace Wt;


Home::Home()  {

}



WTemplate* Home::home_template() {

    _home = new WTemplate(WString::tr("home"));


    return _home;

}


Home::~Home() { }




