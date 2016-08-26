//
// Created by Tyrone Swinnie on 8/12/16.
//

#include "Work.h"


using namespace Wt;

Work::Work() { }


WTemplate* Work::work_template() {

   WTemplate *work_content = new WTemplate(WString::tr("work"));

    return work_content;
}

void Work::toggleCardDetails() {

    //toggle hover effect for work detail cards
    Wt::WApplication *app = Wt::WApplication::instance();
    app->doJavaScript("$(document).ready(function(){$('.work-details').displayWorkDetails();});");




}

void Work::showModal() {

    //toggle hover effect for work detail cards
    Wt::WApplication *app = Wt::WApplication::instance();
    app->doJavaScript("$(document).ready(function(){$('body').callModal();});");
}




Work::~Work() { }


