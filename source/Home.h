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
#include <string>

using namespace Wt;


class Home  {
public:
    Home();
    WTemplate *home_template();
    ~Home();
    WTemplate *_home;
    void runDynamicSkills();

private:
    WText *_author;
    WText *_quote_content;
    std::string  _author_name;
    std::string _author_quote;
    std::string  _author_name2;
    std::string _author_quote2;
    std::string  _author_name3;
    std::string _author_quote3;
    std::string _aut;
    std::string _qut;
    void quoteShuffle();


};


#endif //PROJECT_NAME_HOME_H
