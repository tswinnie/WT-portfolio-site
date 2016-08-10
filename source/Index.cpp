//
// Created by Tyrone Swinnie on 8/8/16.
//

#include "Index.h"
#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>
#include <Wt/WString>

using namespace Wt;

Index::Index(WContainerWidget *parent) : WContainerWidget(parent) {
    container = new WContainerWidget(this);

    header();


    _content = 0;
    if (_content == 0) {
        _content = new WContainerWidget(this);
        _content->setId("content");

    }
//    internalPathChanged().connect(this, &ControlExample::onInternalPathChange);

    //load page elements
    home();
    footer_container = new WContainerWidget(this);
    footer();


}


//void onInternalPathChange() {
//    content()->clear();
//    if (internalPath() == "/") {
//        home();
//    }
//    else if (internalPath() == "/page1") {
//        page1();
//    }
//}


void Index::header() {

//    WTemplate *headerTemplate = new WTemplate(WString::tr("nav"));

    Wt::WTemplate *welcome = new Wt::WTemplate(WString::tr("header"));
    container->addWidget(welcome);
}

void Index::footer() {

    WTemplate *footer = new WTemplate(WString::tr("footer"));

    footer_container->addWidget(footer);
}

void Index::home(){

    WTemplate *home = new WTemplate(WString::tr("home"));
    _content->addWidget(home);

}


WApplication* createApp(const WEnvironment &env){

    WApplication *app = new WApplication(env);

    app->setTitle("Tyrone Swinnie");

    //Views (use name of header file. Leave off.xml)
    app->messageResourceBundle().use("views/header");
    app->messageResourceBundle().use("views/footer");
    app->messageResourceBundle().use("views/home");



    //css
    app->useStyleSheet("css/moz-transitions.css");
    app->useStyleSheet("css/transitions.css");
    app->useStyleSheet("css/webkit-transitions.css");
    app->useStyleSheet("css/bootstrap.min.css");
    app->useStyleSheet("css/mdb.min.css");
    app->useStyleSheet("css/style.css");


    //js
    app->requireJQuery("js/jquery-2.2.3.min.js");
    app->require("js/tether.min.js");
    app->require("js/bootstrap.min.js");
    app->require("js/mdb.min.js");


    app->root()->addWidget(new Index);


    return app;
}


int main(int argc, char **argv) {

    return WRun(argc,argv, &createApp);
}