//
// Created by Tyrone Swinnie on 8/12/16.
//

#include "Work.h"
#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;

Work::Work() { }


WTemplate* Work::work_template() {

   WTemplate *work_content = new WTemplate(WString::tr("work"));

    return work_content;
}


Work::~Work() { }


