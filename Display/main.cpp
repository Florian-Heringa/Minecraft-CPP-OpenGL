#include "Display.h"

int main()
{
    Display::init("Test");

    while (Display::isOpen())
    {
        Display::clear();
        Display::update();

        Display::checkForClose();
    }
}
