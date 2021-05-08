#include <gui/screen1_screen/Screen1View.hpp>
#include <texts/TextKeysAndLanguages.hpp>

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
    textArea1.resizeToCurrentTextWithAlignment();
    textArea1.invalidate();
}
