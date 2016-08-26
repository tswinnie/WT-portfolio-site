//
// Created by Tyrone Swinnie on 8/12/16.
//

#include "About.h"


using namespace Wt;

About::About() { }


WTemplate* About::about_template() {

    WTemplate *about_content = new WTemplate(WString::tr("about"));

    return about_content;
}


About::~About() { }