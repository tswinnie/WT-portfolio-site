//
// Created by Tyrone Swinnie on 8/12/16.
//

#include "About.h"
#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;

About::About() { }


WTemplate* About::about_template() {

    WTemplate *about_content = new WTemplate(WString::tr("about"));

    return about_content;
}


About::~About() { }