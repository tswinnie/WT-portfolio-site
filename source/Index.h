//
// Created by Tyrone Swinnie on 8/8/16.
//

#ifndef PROJECT_NAME_INDEX_H
#define PROJECT_NAME_INDEX_H

#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>
#include <Wt/WAnimation>
#include <Wt/WAnchor>
#include <Wt/WLink>
#include <Wt/WText>
#include <Wt/WTemplate>

using namespace Wt;

class Index : public WContainerWidget {
public:
    Index(WContainerWidget *parent = 0);
    WContainerWidget *container;
    WContainerWidget* _content;
    WContainerWidget* footer_container;
    void header();
    void footer();
    void home();



};


#endif //PROJECT_NAME_INDEX_H
