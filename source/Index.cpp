//
// Created by Tyrone Swinnie on 8/8/16.
//

#include "Index.h"
#include "Home.h"
#include "About.h"
#include "Work.h"
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

    WApplication *app = WApplication::instance();
    container = new WContainerWidget(this);

    header();
    _content = 0;
    app->internalPathChanged().connect(this, &Index::onInternalPathChange);

    content()->hide();
    //load page elements
    Home hm;
    content()->addWidget(hm.home_template());
    content()->show();
    app->doJavaScript("$(document).ready(function(){$('.card').animateCardsShow ();})");



    footer_container = new WContainerWidget(this);
    footer();






}


WContainerWidget* Index::content() {

    if (_content == 0) {
        _content = new WContainerWidget(this);
        _content->setId("content");
    }
    return _content;
}


void Index::onInternalPathChange() {
    Wt::WApplication *app = Wt::WApplication::instance();


    //clear the current content on the main page
    content()->clear();




    if (app->internalPath() == "/") {
        Home hm2;
        content()->addWidget(hm2.home_template());
        //hide content initially before showing it with animation
        content()->hide();
        content()->show();
        app->doJavaScript("$(document).ready(function(){$('.card').animateCardsShow ();})");

    }
    else if (app->internalPath() == "/about") {
        About abt;
        content()->addWidget(abt.about_template());
        //hide content initially before showing it with animation
        content()->hide();
        content()->show();
        app->doJavaScript("$(document).ready(function(){$('.card').animateCardsShow ();})");

    }
    else if (app->internalPath() == "/work"){
        //run card animation
        Work wrk;
        content()->addWidget(wrk.work_template());
        wrk.toggleCardDetails();
        wrk.showModal();
        //hide content initially before showing it with animation
        content()->hide();
        content()->show();
        app->doJavaScript("$(document).ready(function(){$('.card').animateCardsShow ();})");


    }
}


void Index::header() {



    Wt::WTemplate *head = new Wt::WTemplate(WString::tr("header"));
    container->addWidget(head);

    brand_link = new Wt::WAnchor(Wt::WLink(Wt::WLink::InternalPath, "/"), "ty<b class='logo-dot'>.</b>", container);
    brand_link->addStyleClass("navbar-brand");
    head->bindWidget("brand-link",brand_link);

    home_link = new Wt::WAnchor(Wt::WLink(Wt::WLink::InternalPath, "/"), "Home", container);
    home_link->addStyleClass("nav-link");
    head->bindWidget("home-link",home_link);

    about_link = new Wt::WAnchor(Wt::WLink(Wt::WLink::InternalPath, "/about"), "About", container);
    about_link->addStyleClass("nav-link");
    head->bindWidget("about-link",about_link);

    work_link = new Wt::WAnchor(Wt::WLink(Wt::WLink::InternalPath, "/work"), "Work", container);
    work_link->addStyleClass("nav-link");
    head->bindWidget("work-link",work_link);

}

void Index::footer() {

    WTemplate *footer = new WTemplate(WString::tr("footer"));

    footer_container->addWidget(footer);
}



void Index::work() {
    WTemplate *work = new WTemplate(WString::tr("work"));
    content()->addWidget(work);

}


void Index::about() {
    WTemplate *about = new WTemplate(WString::tr("about"));
    content()->addWidget(about);

}


WApplication* createApp(const WEnvironment &env){

    WApplication *app = new WApplication(env);

    app->setTitle("Tyrone Swinnie");

    //Views (use name of header file. Leave off.xml)
    app->messageResourceBundle().use("views/header");
    app->messageResourceBundle().use("views/footer");
    app->messageResourceBundle().use("views/home");
    app->messageResourceBundle().use("views/about");
    app->messageResourceBundle().use("views/work");




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
    app->require("js/typed.min.js");
    app->require("js/main.js");



    app->root()->addWidget(new Index);


    return app;
}


int main(int argc, char **argv) {

    return WRun(argc,argv, &createApp);
}