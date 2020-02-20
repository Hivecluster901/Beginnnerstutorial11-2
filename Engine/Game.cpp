/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
    /*gfx.PutPixel(788, 590, 255, 255, 255);
    gfx.PutPixel(789, 590, 255, 255, 255);
    gfx.PutPixel(790, 590, 255, 255, 255);
    gfx.PutPixel(796, 590, 255, 255, 255);
    gfx.PutPixel(797, 590, 255, 255, 255);
    gfx.PutPixel(798, 590, 255, 255, 255);*/

    const int x = 250;
    const int result = x + 400;

    gfx.PutPixel(x, 585, 255, 255, 255);
    gfx.PutPixel(x, 586, 255, 255, 255);
    gfx.PutPixel(x, 587, 255, 255, 255);
    gfx.PutPixel(x, 593, 255, 255, 255);
    gfx.PutPixel(x, 594, 255, 255, 255);
    gfx.PutPixel(x, 595, 255, 255, 255);



}


