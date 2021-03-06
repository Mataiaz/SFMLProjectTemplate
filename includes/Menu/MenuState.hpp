#pragma once

#include "State.hpp"
#include "ResourceManager.hpp"

class MenuState : public State
{
private:
	mf::Button		*mPlayBtn;
	mf::Button		*mQuitBtn;
	mf::Button		*mOptionsBtn;
	
public:
	MenuState(Window *tWindow);
	~MenuState();

	void		Init();
	void		HandleEvents();
	void		Update();
	void		Render();
};

