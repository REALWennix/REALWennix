#pragma once
#include "Window.h"
#include "GraphicsEngine.h"


class AppWindow: public Window
{
public:
	AppWindow();
	~AppWindow();



	// D�d� se p�es Window.
	virtual void onCreate() override;

	virtual void onUpdate() override;

	virtual void onDestroy() override;

};

