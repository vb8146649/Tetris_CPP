#include <raylib.h>
#include "game.h"
// #include<iostream>
double lastUpdateTime=0;

bool EventTriggered(double interval)
{
    double currentTime=GetTime();
    if(currentTime-lastUpdateTime>=interval)
    {
        lastUpdateTime = currentTime;
        return true;
    }
    return false;
}
int main(){
    Color darkBlue={44,44,127,255};
    InitWindow(500,920,"game");
    SetTargetFPS(60);
    Game game=Game();
    Font font =LoadFontEx("monogram.ttf",64,0,0);
    while(WindowShouldClose()==false){
        game.HandleInput();
        if(EventTriggered(0.2)){
            game.MoveBlockDown();
        }
        BeginDrawing();
        ClearBackground(darkBlue);
        DrawTextEx(font,"Score",{365,15},38,2,WHITE);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
}