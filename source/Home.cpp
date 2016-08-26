//
// Created by Tyrone Swinnie on 8/10/16.
//

#include "Home.h"


using namespace Wt;


Home::Home()  { }


//template function for creating home content
WTemplate* Home::home_template() {
    _home = new WTemplate(WString::tr("home"));

    //call quoteShuffle when home content is called into view
    quoteShuffle();

    //call the Typed.js library
    runDynamicSkills();


    return _home;
}


//responsible for displaying random quotes
void Home::quoteShuffle() {
    //create map for holding quotes
    std::map<std::string, std::string>quotes;
    _author_name = "Peter Drucker";
    _author_quote = "The best way to predict the future is to create it.";

    _author_name2 = "George Edward Woodberry";
    _author_quote2 = "Defeat is not the worst of failures. Not to have tried is the true failure.";

    _author_name3 = "Nelson Mandela";
    _author_quote3 = "It always seems impossible until its done.";

    quotes[_author_name] = _author_quote;
    quotes[_author_name2] = _author_quote2;
    quotes[_author_name3] = _author_quote3;

    //create iterator and set values to random
    auto it = quotes.begin();
    std::advance(it, rand() % quotes.size());

    //get random values and assign them to string value
    _aut = it->first;
    _qut = it->second;


    //assign author and _quote_content to quote details
    _author = new WText(WString(_aut));
    _quote_content = new WText(WString(_qut));


    //bind quote author to template
    _home->bindWidget("quote-author", _author);
    _home->bindWidget("quote-content", _quote_content);

}


void Home::runDynamicSkills() {

    Wt::WApplication *app = Wt::WApplication::instance();

    //make a call to my JS library for type functionality
    app->doJavaScript("$(document).ready(function(){$('.skills').runType();});");



}




Home::~Home() { }




