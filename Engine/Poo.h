#pragma once

#include "Graphics.h"
#include "Dude.h"
class Poo
{
public:
    void Update();
    void Processconsumption(const Dude& dude);//In general, we should pass an object by reference. This is because copying an object to a parameter will take a lot of time and make our program slow.
                                              // const keyword says we are not changing any value of dude object.(Read-Only)
    void Draw(Graphics& gfx) const; // We can only pass gfx by reference. When gfx is passed as an argument, it should be copied to the parameter but this is impossible.
    
    //Draw is not a mutator. Thus, we need to put const keyword at the end. 
    int x;
    int y;
    int vx;
    int vy;
    static constexpr int width = 24;// we can change const variable every single time we call the function 
                                    //whilee we cannot change constexpr variable no matter how many times the function is called.
    static constexpr int height = 24;// static members are shared all over with every object; It can be accessed with the expression: Poo::width
    bool isEaten = false;
};