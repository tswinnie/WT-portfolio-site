#include <Wt/WApplication>
#include <Wt/WPushButton>
#include <Wt/WContainerWidget>

using namespace Wt;

class HelloWorld : public WContainerWidget{

public:
    HelloWorld(WContainerWidget *parent = 0);
};

HelloWorld::HelloWorld(WContainerWidget *parent) : WContainerWidget(parent) {

    WContainerWidget *container = new WContainerWidget(this);
    WPushButton *button = new WPushButton;
    button->setText("Hello, World!");
    button->setStyleClass("btn btn-primary");
    container->addWidget(button);

}

WApplication* createApp(const WEnvironment &env){

    WApplication *app = new WApplication(env);
    app->setTitle("Template Project");

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


    app->root()->addWidget(new HelloWorld);

    return app;
}

int main(int argc, char **argv) {
    return WRun(argc,argv, &createApp);
}