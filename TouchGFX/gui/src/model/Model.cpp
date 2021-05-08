#include "cmsis_os.h"

#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <gui/screen1_screen/Screen1View.hpp>

extern osMessageQueueId_t TempQueue;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	auto app = Application::getInstance();
	Screen1View *screen = (Screen1View *)app->getCurrentScreen();

	float temp;
	auto status = osMessageQueueGet(TempQueue, &temp, NULL, 0U);
	if (status == osOK)
		screen->updateTemp(temp);
}
