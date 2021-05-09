#include "cmsis_os.h"

#include <gui/screen1_screen/Screen1View.hpp>
#include <texts/TextKeysAndLanguages.hpp>

#include "common.h"

extern osEventFlagsId_t msgFlags;

Screen1View::Screen1View()
{
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::updateTemp(float temp)
{
    Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%.1f", temp);
    textArea1.invalidate();
}

void Screen1View::onButtonStart()
{
    // Override and implement this function in Screen1
	osEventFlagsSet(msgFlags, MSG_BUTTON_START);
}

void Screen1View::onButtonDevelop()
{
    // Override and implement this function in Screen1
	osEventFlagsSet(msgFlags, MSG_BUTTON_DEVELOP);
}
