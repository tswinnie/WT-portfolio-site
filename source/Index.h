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
#include "Home.h"

using namespace Wt;

class Index : public WContainerWidget {
public:
    Index(WContainerWidget *parent = 0);
    WContainerWidget *container;
    WContainerWidget  *_content;
    WContainerWidget* content();
    WContainerWidget* footer_container;
    WAnchor *brand_link;
    WAnchor *home_link;
    WAnchor *about_link;
    WAnchor *work_link;
    void onInternalPathChange();
    void header();
    void footer();
    void work();
    void about();
};


#endif //PROJECT_NAME_INDEX_H
