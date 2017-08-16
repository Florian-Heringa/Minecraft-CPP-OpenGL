#include "Display.h"
#include "Application.h"

int main()
{
    Display::init("Test");

    Application app;

    app.runMainGameLoop();

    return 0;
}
