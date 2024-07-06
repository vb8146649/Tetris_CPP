#include "block.h"
Block::Block(){
    cellSize=30;
    rotationState=0;
    colors=GetCellColors();
    rowOffset=0;
    columnOffset=0;
}

void Block::Draw(int offsetX,int offsetY){
    vector<Position> tiles = GetCellPositions();
    for(Position item:tiles){
        DrawRectangle(item.column * cellSize+offsetX,item.row* cellSize+offsetY,cellSize-1,cellSize-1,colors[id]);
    }
}

void Block::Move(int rows,int columns){
    rowOffset+=rows;
    columnOffset+=columns;
}

vector<Position> Block::GetCellPositions(){
    vector<Position> tiles = cells[rotationState];
    vector<Position> movedTiles;
    for(Position items: tiles){
        Position newPos=Position(items.row+rowOffset,items.column+columnOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

void Block::Rotate()
{
    rotationState++;
    rotationState%=cells.size();
}

void Block::UndoRotation()
{
    rotationState--;
    if(rotationState<0){
        rotationState+=cells.size();
    }
}
