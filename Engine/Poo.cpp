#include "Poo.h"
#include "Graphics.h"

void Poo::Update()
{
    x += vx;
    y += vy;
    const int right = x + width;
    if (x < 0)
    {
         x = 0;
         vx = -vx;
    }
    else if (right >= Graphics::ScreenWidth)
    {
        x = (Graphics::ScreenWidth - 1) - width;
        vx = -vx;
    }
    const int bottom = y + height;

    if (y < 0)
    {
        y = 0;
        vy = -vy;
    }
    else if (bottom >= Graphics::ScreenHeight)
    {
        y = (Graphics::ScreenHeight - 1) - height;
        vy = -vy;
    }
}

void Poo::Processconsumption(int dudex, int dudey, int dudewidth, int dudeheight)
{
    const int right0 = dudex + dudewidth;
    const int bottom0 = dudey + dudeheight;
    const int right1 = x + width;
    const int bottom1 = y + height;

    
    if (right0 >= x && dudex <= right1 && bottom0 >= y && dudey <= bottom1)
    {
        isEaten = true;
    }
}
